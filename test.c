#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){
  printf("\n== Testing Library add_song() and print_library() ==\n");
    add_song("Billie Jean", "Michael Jackson");
    add_song("Thriller", "Michael Jackson");
    add_song("Im Still Here", "Sia");
    add_song("You Say", "Lauren");
    add_song("Champion", "Kanye West");
    add_song("Despacito", "Luis Fonsi");
    add_song("TTD", "NAV");
    print_library();
        

    printf("\n== Testing Library  find and song() ==\n");
    printf("Searching for Billie Jean by Michael Jackson\n");
    find_artist( "Billie Jean", "Michael Jackson");
    printf("Searching for Thriller by Michael Jackson \n");
    find_artist( "Thriller", "Michael Jackson");

    printf("\n== Testing Library search_artist() ==\n");
    printf("Searching for the first song by Kanye\n");
    print_node(search_artist( "Kanye West"));
    printf("Searching for the first song by Luis Fonsi\n");
    print_node(search_artist( "Luis Fonsi"));
  
    printf("\n== Testing Library print_letter() ==\n");
    printf("Printing songs from aritsts starting with N\n");
    print_letter('N');
    printf("Printing songs from aritsts starting with K\n");
    print_letter('K');

    printf("\n== Testing Library print_artist() ==\n");
    printf("Printing songs from Michael Jackson\n");
    print_artist( "Michael Jackson");
    printf("Printing songs from Kanye West\n");
    print_artist( "Kanye West");

    printf("\n== Testing Library shuffle() ==\n");
    shuffle( 4);
    shuffle( 3);

    printf("\n== Testing Library delete_song() ==\n");
    printf("Deleting Thriller by Michael Jackson\n");
    delete_song("Thriller", "Michael Jackson");
    print_library();

    printf("\n== Testing Library free_library() ==\n");
    free_library();
    printf("Printing freed library:\n");
    print_library();
    return 0;
}
