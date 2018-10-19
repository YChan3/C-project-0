#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "library.h"

int main(){
    printf("++++++++++++++++++LINKED LIST TEST++++++++++++++++++\n");
    printf("Make a list of nodes using insert_order and print it\n");
    struct song_node *node = malloc(sizeof(struct song_node));
    node = NULL;
    node  = insert_order(node, "song1", "artist0");
    node  = insert_order(node, "song2", "artist0");
    node  = insert_order(node, "song0", "artist1");
    node  = insert_order(node, "song1", "artist1");
    node  = insert_order(node, "song2", "artist1");
    node  = insert_order(node, "song0", "artist2");
    node  = insert_order(node, "song1", "artist2");
    node  = insert_order(node, "song2", "artist2");
    node  = insert_front(node, "song0", "artist0");
    print_list(node);

    printf("\nfind using a song and artist test\n");
    printf("%s\n","pointer to the node with song1 by artist1" );
    struct song_node *fsa0  = find_song_artist(node, "song1", "artist1");
    print_list(fsa0);

    printf("\nfind the first song by an artist test\n");
    printf("%s\n","pointer to the node with the first song by artist1");
    struct song_node *fss0  = find_first_song(node, "artist1");
    print_list(fss0);

    printf("\nfind a random song test\n");
    printf("%s\n","first random song");
    struct song_node *rs0  = rand_song(node);
    print_list(rs0);
    printf("\n%s\n","second random song");
    rs0  = rand_song(node);
    print_list(rs0);
    printf("\n%s\n","third random song");
    rs0  = rand_song(node);
    print_list(rs0);

    printf("\nREMOVE SONGS test\n");
    printf("%s\n","removed song0 by artist2, remaining list");
    node = rem_song(node, find_song_artist(node, "song0", "artist2"));
    print_list(node);
    printf("%s\n","removed song1 by artist2, remaining list");
    node = rem_song(node, find_song_artist(node, "song2", "artist2"));
    print_list(node);
    printf("%s\n","removed song1 by artist0, remaining list");
    node = rem_song(node, find_song_artist(node, "song0", "artist0"));
    print_list(node);

    printf("\nFREE LIST test\n");
    node = free_list(node);
    print_list(node);

    // printf("\n== Testing Library add_song() and print_library() ==\n");
    // add_song("Billie Jean", "Michael Jackson");
    // add_song("Thriller", "Michael Jackson");
    // add_song("Im Still Here", "Sia");
    // add_song("You Say", "Lauren");
    // add_song("Champion", "Kanye West");
    // add_song("Despacito", "Luis Fonsi");
    // add_song("TTD", "NAV");
    // print_library();
    //
    //
    // printf("\n== Testing Library  find and song() ==\n");
    // printf("Searching for Billie Jean by Michael Jackson\n");
    // find_artist( "Billie Jean", "Michael Jackson");
    // printf("Searching for Thriller by Michael Jackson \n");
    // find_artist( "Thriller", "Michael Jackson");
    //
    // printf("\n== Testing Library search_artist() ==\n");
    // printf("Searching for the first song by Kanye\n");
    // print_node(search_artist( "Kanye West"));
    // printf("Searching for the first song by Luis Fonsi\n");
    // print_node(search_artist( "Luis Fonsi"));
    //
    // printf("\n== Testing Library print_letter() ==\n");
    // printf("Printing songs from aritsts starting with N\n");
    // print_letter('N');
    // printf("Printing songs from aritsts starting with K\n");
    // print_letter('K');
    //
    // printf("\n== Testing Library print_artist() ==\n");
    // printf("Printing songs from Michael Jackson\n");
    // print_artist( "Michael Jackson");
    // printf("Printing songs from Kanye West\n");
    // print_artist( "Kanye West");
    //
    // printf("\n== Testing Library shuffle() ==\n");
    // shuffle( 4);
    // shuffle( 3);
    //
    // printf("\n== Testing Library delete_song() ==\n");
    // printf("Deleting Thriller by Michael Jackson\n");
    // delete_song("Thriller", "Michael Jackson");
    // print_library();
    //
    // printf("\n== Testing Library free_library() ==\n");
    // free_library();
    // printf("Printing freed library:\n");
    // print_library();
    return 0;
}
