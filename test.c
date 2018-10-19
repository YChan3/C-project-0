#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){
	// printf("current list\n");
	// struct song_node *n0  = insert_front(0, "song0", "artist0");
	// struct song_node *n1  = insert_front(n0, "song1", "artist0");
	// struct song_node *n2  = insert_front(n1, "song2", "artist0");
	// struct song_node *n3  = insert_front(n2, "song0", "artist1");
	// struct song_node *n4  = insert_front(n3, "song1", "artist1");
	// struct song_node *n5  = insert_front(n4, "song2", "artist1");
	// struct song_node *n6  = insert_front(n5, "song0", "artist2");
	// struct song_node *n7  = insert_front(n6, "song1", "artist2");
	// struct song_node *n8  = insert_front(n7, "song2", "artist2");
	// print_list(n8);
  //
  // printf("\nfind_song_artist test\n");
  // struct song_node *fsa0  = find_song_artist(n8, "song1", "artist1");
  // print_list(fsa0);
  //
  // printf("\nfind_first_song test\n");
  // struct song_node *fss0  = find_first_song(n8, "artist0");
  // print_list(fss0);
  //
  // printf("\nrand_song test\n");
  // struct song_node *rs0  = rand_song(n8);
  // print_list(rs0);
  //
  // printf("\nrem_song test\n");
  // rem_song(n8, fsa0);
  // print_list(n8);

  struct song_node *node = malloc(sizeof(struct song_node));
  node = NULL;

	printf("first node for insert_order\n");
	node = insert_order(node, "song1", "artist4");
	print_list(node);

	printf("first node for insert_order\n");
	node = insert_order(node, "song1", "artist2");
	print_list(node);

	printf("first node for insert_order\n");
	node = insert_order(node, "song1", "artist3");
	print_list(node);

  printf("first node for insert_order\n");
	node = insert_order(node, "song2", "artist2");
	print_list(node);

  printf("first node for insert_order\n");
	node = insert_order(node, "song0", "artist2");
	print_list(node);

  printf("first node for insert_order\n");
	node = insert_order(node, "song1", "artist2");
	print_list(node);

	return 0;
}
