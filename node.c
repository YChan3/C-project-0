#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	struct song_node *current = malloc(sizeof(struct song_node));
  current = head;

	if(!current){
    strcpy(head->name, song);
  	strcpy(head->artist, composer);
		return new;
	}

	while(current){
		 if(strcmp(composer, current->artist) < 0 ){
			new->next = current;
			return new;
		}

		else if(strcmp(composer, current->artist) > 0){
			current=current->next;
		}
		else if(strcmp(composer, current->artist) == 0){
			if(strcmp(song, current->name) < 0 || strcmp(song, current->name) == 0){
				new->next = current;
				return new;
			}
			else if(strcmp(song, current->name) > 0){
				current = current -> next;
			}
		}
	}
	new->next = current;
	return new;
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

  if(head == rem){
    head = rem->next;
    return head;
  }

  while(current){
    if(current->next == rem){
      current->next = rem->next;
      return current;
    }
    current = current->next;
  }
  return current;
}
