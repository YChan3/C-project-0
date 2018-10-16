#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){
 	struct song_node *n0;
	strcpy(n0->name, "billy jean");
	strcpy(n0->artist, "mj");
	n0->next = NULL;

	printf("Insert a 1 at the front\n");
	struct song_node *n1  = insert_front(n0, 'song2', 'boast malone');
	print_list(n1);

	printf("Insert a 2 at the front\n");
	struct song_node *n2  = insert_order(n1, 'song3', 'coast malone');
	print_list(n2);

	return 0;
}
