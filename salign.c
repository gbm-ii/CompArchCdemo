/*
	Computer Architecture demos
	salign.c - Print size and alignment of some types or objects
	gbm 02'2021
	
	32- and 64-bit versions yield different values
*/
#include <stdio.h>

#define xstr(s) str(s)
#define str(s) #s
// macro to print type/object size and alignment
#define printsa(t)	printf("%-15s%3u%7u\n", xstr(t), (unsigned int)sizeof(t), (unsigned int)_Alignof(t))

// an object with enforced alignment    
_Alignas(32) int myalignedint;

int main(int argc, char *argv[])
{
	printf("type           size alignment\n");
	printsa(short int);
	printsa(int);
	printsa(long int);
	printsa(long long int);
	printsa(float);
	printsa(double);
	printsa(long double);
	printsa(_Float128);
	printsa(_Decimal32);
	printsa(_Decimal64);
	printsa(_Decimal128);
	printsa(myalignedint);
}
