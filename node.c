#include <string.h>
#include <stdio.h>
#include <stdlib.h>


struct song_node{
 	char name[100];
  char artist[100];
	struct song_node *next;
};


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
	return head;
}

struct song_node * insert_order(struct song_node *head, char *song, char *composer){
  struct song_node *new = malloc(sizeof(struct song_node));
	strcpy(new->name, song);
	strcpy(new->artist, composer);
	new->next = head;
	return new;
}
