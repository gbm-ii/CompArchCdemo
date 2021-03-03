/*
	Computer Architecture demos
	floats.c - float type saturation
	gbm 02'2021
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	float f = 0.0f;
	unsigned int iter = 0;

	if (argc < 2)
	{
		printf("Usage: %s <count>\n", argv[0]);
		return 1;
	}
	sscanf(argv[1], "%u", &iter);

	// add 1.0 to the initial 0.0 # of times given in the command line
	for (unsigned int i = 0; i < iter; i++)
		f += 1.0f;

	printf("sum: %f, avg: %f\n", f, f / iter);
	return 0;
}
