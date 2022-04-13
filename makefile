# -*- MakeFile -*-

main2: main2.o stack.o
	clang main2.o stack.o -o main2 -o stack
	
main2.o: main2.c
	clang -c main2.c
	
stack.o: stack.c stack.h
	clang -c stack.c
	
clean:
	rm *.o main2 stack