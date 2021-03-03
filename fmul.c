/*
	Computer Architecture demos
	fmul.c - float representation error
	gbm 02'2021
	
	Run the program with various arg values.
*/
#include <stdio.h>

#define FF	"%40.20lf\n"

int main(int argc, char *argv[])
{
	double f, g;

	if (argc >= 3
		&& sscanf(argv[1], "%lf", &f)
		&& sscanf(argv[2], "%lf", &g))

		printf(" " FF "*" FF "=" FF, f, g, f*g);
	else
	{
		printf("Usage: fpmul <floatval> <floatval>\n");
		return 1;
	}
}

