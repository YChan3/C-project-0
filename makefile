all: test.o library.o linked_list.o
	gcc -o out test.o library.o linked_list.o

test.o: test.c library.h linked_list.h
	gcc -c test.c

library.o: library.c linked_list.h
	gcc -c library.c

linked_list.o: linked_list.c
	gcc -c linked_list.c

run:
	./out

clean:
	rm out
	rm *.o
