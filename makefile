all:	test.o node.o
	gcc -o out test.o node.o

node.o: node.c
	gcc -c node.c

testing.o: test.c node.h
	gcc -c test.c

run:
	./out

clean:
	rm out
	rm *.o
