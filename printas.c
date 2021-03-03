#include <stdio.h>

int main(int argc, char *argv[])
{
	int x = 'A';
	int p = 100;
	int i;
	
	if (argc > 1)
		x = argv[1][0];
	printf("Decimal: %d\n", x);
	printf("Hex %x\n", x);
	printf("Octal: %o\n", x);
	printf("Character: %c\n", x);
	printf("Uppercase character: %c\n", x & ~0x20);
	printf("Lowercase character: %c\n", x | 0x20);
	printf("Flipped case character: %c\n", x ^ 0x20);

	printf("multiplied by 4: %d\n", x * 4);
	printf("divided by 8: %d\n", x / 8);
	
	for (i = 0; i < 5; i++)
	{
/*		if (p == 100)
			p = 200;
		else
			p = 100;
		*/
		p ^= 100 ^ 200;
		x ^= 'A' ^ 'Z';
		printf("p is now %d, letter is now %c\n", p, x);
	}
}
