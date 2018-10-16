
struct song_node{ 
 	char name[100];
  	char artist[100];
  	struct song_node *next;
};

void print_list(struct node *);
struct node * insert_front(struct node *, char *, char *);
struct node * free_list(struct node *);
struct song_node insert_order(struct song_node *, char *, char *);
