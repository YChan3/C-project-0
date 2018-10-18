#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(){
//	printf("Insert a 1 at the front\n");
//	struct song_node *n0  = insert_front(0, "billy jean", "mj");
//	print_list(n0);
//
//	printf("Insert a 1 at the front\n");
//	struct song_node *n1  = insert_front(0, "song2", "boast malone");
//	print_list(n1);

	printf("first node for insert_order\n");
	struct song_node *ol0  = insert_order(0, "song1", "artist4");
	print_list(ol0);
	
	printf("first node for insert_order\n");
	struct song_node *ol1  = insert_order(ol0, "song1", "artist2");
	print_list(ol1);

	printf("first node for insert_order\n");
	struct song_node *ol2  = insert_order(ol1, "song1", "artist3");
	print_list(ol2);
	
	

	return 0;
}
