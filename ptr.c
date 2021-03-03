/*
	Computer Architecture demos
	ptr.c - Print addresses of memory sections
	gbm 02'2021
	
	The program may be compiled as 32- or 64-bit.
	With gcc, try it with and without -no-pie option
	and see the differences running the program few times.
*/
#include <stdio.h>
#include <stdlib.h>

int u;

int main(int argc, char *argv[])
{
	char *p;
	p = malloc(100);
	printf("text  : %p\n"
		"static: %p\n"
		"stack : %p\n"
		"heap  : %p\n",
		main, &u, &argc, p);
	return 0;
}