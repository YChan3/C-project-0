#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "node.h"
#include "library.h"

struct song_node *lib[27];

int ind(char c){
  if(65 <= c && c <= 90){
    return (int ) c - 'A';
  }
  return 26;
}

struct song_node *  find_artist( char *song, char *artist){
    int i = ind(artist[0]);
    struct song_node *x =  find_song_artist(lib[i], song, artist);
    return x;
}

struct song_node *  find_song( char* artist){
  int i = ind(artist[0]);
  struct song_node *x =  find_first_song(lib[i], artist);
  return x;
}

struct song_node * random_song(){
    int x = rand() % 27;
    while(rand_song(lib[x])==NULL){
      x=rand()%27;
    }
    return rand_song(lib[x]);
}

void shuffle( int n){
  struct song_node *lib2[27]=lib;
  while(n--){
    int x = rand() % 27;
    while(rand_song(lib2[x])==NULL){
      x=rand()%27;
    }
    np(rand_song(lib2[x]));
    rem_song(lib2[x], find_song_artist(lib2[x], lib2[x]->name, lib2[x]->artist));

  }
}

void np(struct song_node *x){
  printf("%s", x->artist);
  printf(": %s \n", x->name);
}

void print_letter( char s){
  int x=ind(s);
  print_list(lib[x]);

}

void print_artist( char *s){
  int x=ind(s);
  struct song_node *a = lib[x];
  while(a){
    if(strcmp(a->artist,s)==0){
      np(a);
    }
    a=a->next;
  }
}

void print_library(){
  for(int i=0; i<27; i++){
    print_list(lib[i]);
  }
}

void * free_library(){
    for(int i = 0; i < 27; i++){
        free_list(lib[i]);
    }
    return 0;
}

void  add_song(char name[], char artist[]){
    int index =ind(artist[0]);
     insert_ordered(lib[index], name, artist);
}

void  delete_song(char name[], char artist[]){
    int index =ind(artist[0]);
    rem_song(lib[index], find_song_artist(lib[index], name, artist));
}
