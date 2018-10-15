struct song_node{ 
 	char name[100];
  	char artist[100];
  	struct song_node *next;
};

struct song_node insert_order(struct song_node *head, char *song, char *composer){
	struct song_node *new = malloc(sizeof(struct song_node));
	new->name = song;
	new->artist = composer;

	if(artist == NULL){
		return new;
	}

	while(head){
		if(strcmp(composer, artist) < 0){
			new->next = head;
			return new;
		}
		else if(strcmp(composer, artist) > 0){
			head = head -> next;
		}
		else if(strcmp(composer, artist) == 0){
			if(strcmp(song, name) < 0 || strcmp(song, name) == 0){
				new->next = head;
				return new;
			}
			else if(strcmp(song, name) > 0){
				head = head -> next;
			}
		}
	new->next = head;
	return new;
}
			

int main(){
	}
