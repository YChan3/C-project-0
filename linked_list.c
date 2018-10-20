#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linked_list.h"

void print_list(struct song_node *head){
	while(head){
		printf("%s, %s\n", head->name, head->artist);
		head=head->next;
	}
}

struct song_node * insert_front(struct song_node *head, char *song, char *composer){
	struct song_node *new = malloc(sizeof(struct song_node));
	strcpy(new->name, song);
	strcpy(new->artist, composer);
	new->next = head;
	return new;
}

struct song_node * free_list(struct song_node *head){
	while(head){
		struct song_node *release = head->next;
		free(head);
		head = release;
	}
	return NULL;
}

struct song_node * insert_order(struct song_node *head, char *song, char *composer){
  struct song_node *new = malloc(sizeof(struct song_node));
	strcpy(new->name, song);
	strcpy(new->artist, composer);

  struct song_node *current = malloc(sizeof(struct song_node));
  current = head;

	if(!current){
		return new;
	}

  if(strcmp(composer, current->artist) < 0 || (strcmp(composer, current->artist) == 0 && strcmp(song, current->name) < 0)){
   new->next = current;
   return new;
 }

 struct song_node *previous = malloc(sizeof(struct song_node));
 previous = head;

 while(current  && (strcmp(composer, current->artist)>0 || (strcmp(composer, current->artist)==0 && strcmp(song, current->name) > 0))){
  previous = current;
  current = current -> next;
 }

 new->next = current;
 previous->next = new;
 return head;
}

struct song_node * find_song_artist(struct song_node *head, char *song, char *composer){
  while(head){
    if(strcmp(composer, head->artist) == 0 && strcmp(song, head->name) == 0){
      return head;
    }
    head = head->next;
  }
}

struct song_node * find_first_song(struct song_node *head, char *composer){
  while(head){
    if(strcmp(composer, head->artist) == 0){
      return head;
    }
    head = head->next;
  }
}

struct song_node * rand_song(struct song_node *head){
  srand(time(NULL));
  struct song_node *current = malloc(sizeof(struct song_node));
  current = head;
  int len = 0;
  while(current){
    len++;
    current = current->next;
  }
  int i = rand() % len;
  while (i) {
    head = head->next;
    i--;
  }
  return head;
}

struct song_node * rem_song(struct song_node *head, struct song_node *rem){
  struct song_node *current = malloc(sizeof(struct song_node));
  current = head;

  struct song_node *previous = malloc(sizeof(struct song_node));
  previous = head;

  if(head == rem){
    head = rem->next;
    return head;
  }

  current = current->next;
  while(current){
    if(current == rem){
      previous->next = rem->next;
      return head;
    }
    previous = current;
    current = current->next;
  }
  return head;
}
