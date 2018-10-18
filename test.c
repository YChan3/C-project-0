#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(){
	printf("Insert a 1 at the front\n");
	struct song_node *n0  = insert_front(0, "billy jean", "mj");
	print_list(n0);

	printf("Insert a 1 at the front\n");
	struct song_node *n1  = insert_front(n0, "song2", "boast malone");
	print_list(n1);

	printf("Insert a 1 at the front\n");
	struct song_node *n2  = insert_order(0, "song3", "boast malone");
	print_list(n2);


	return 0;
}
