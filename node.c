#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

struct song_node* insert_order(struct song_node *head, char *song, char *composer){
	struct song_node *new = malloc(sizeof(struct song_node));
	strcpy(new->name, song);
	strcpy(new->artist, composer);

	if(head->artist == NULL){
		return new;
	}

	while(head){
		if(strcmp(composer, head->artist) < 0){
			new->next = head;
			return new;
		}
		else if(strcmp(composer, head->artist) > 0){
			head = head -> next;
		}
		else if(strcmp(composer, head->artist) == 0){
			if(strcmp(song, head->name) < 0 || strcmp(song, head->name) == 0){
				new->next = head;
				return new;
			}
			else if(strcmp(song, head->name) > 0){
				head = head -> next;
			}
		}
	}
	new->next = head;
	return new;
}
			

