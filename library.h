#ifndef LIBRARY_H
#define LIBRARY_H
#include "linked_list.h"

void np(struct song_node *);

int ind(char );

struct song_node *  find_artist( char *, char *);

struct song_node *  find_song( char* );

struct song_node * random_song();

void shuffle();

void print_letter( char );

void print_artist( char *);

void print_library();

void * free_library();

void  add_song(char [], char []);

void  delete_song(char [], char []);

#endif
