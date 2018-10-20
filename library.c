#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "library.h"

struct song_node *lib[27];
struct song_node *lib2[27];

void np(struct song_node *x){
  printf("%s", x->artist);
  printf(": %s \n", x->name);
}
void print_node(struct song_node *x){
  if(x==NULL){
    printf("Artist and Song not found");
    return;
  }
  print_list(x);
}
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



void print_letter( char s){
  int x=ind(s);
  print_list(lib[x]);

}

void print_artist(char *s){
  int x=ind(s[0]);
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
        lib[i]=free_list(lib[i]);
    }
}

void  add_song(char name[], char artist[]){
    int index =ind(artist[0]);
    lib[index]= insert_order(lib[index], name, artist);
}

void  delete_song(char name[], char artist[]){
    int index =ind(artist[0]);
    lib[index]=rem_song(lib[index], find_song_artist(lib[index], name, artist));
}

void shuffle(){
  int n=0;
  for(int i=0; i <27; i++){
    if(lib[i]!=NULL){
      lib2[i]=lib[i];
    }
  }
  for(int i=0; i<27; i++){
    while(lib2[i]){
      n++;
      lib2[i]= lib2[i]->next;
    }
  }
  printf("%i",n);
   for(int i=0; i <27; i++){
    if(lib[i]!=NULL){
      lib2[i]=lib[i];
    }
  }
 srand(time(NULL));
  while(n!=0){
    int x = rand() % 27;
    while(lib2[x]==NULL){
      x=rand()%27;
    }
    struct song_node *z=rand_song(lib2[x]);
    np(z);
    lib2[x]=rem_song(lib2[x], find_song_artist(lib2[x], z->name, z->artist));
    n--;
  }
 
}


