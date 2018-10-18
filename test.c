#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(){
 	struct song_node *n0;
	strcpy(n0->name, "billy jean");
	strcpy(n0->artist, "mj");
	n0->next = NULL;

	printf("Insert a 1 at the front\n");
	struct song_node *n1  = insert_front(0, "song2", "boast malone");
	print_list(n1);

  printf("Insert a 2 at the front\n");
  struct song_node *ol0  = insert_order(0, "songA", "A");
	// print_list(ordered_list0);

	return 0;
}
