#include <stdio.h>

int main()
{
	int a, b, c, e, f, g;
	for (a = 1; a <= 9; a = a + 2)
	{
		c = (9 - a)/2;
		for (int d = 1; d <= c; d++)
			printf(" ");
		for (b = 1; b <= a; b++)
			printf("*");
		printf("\n");
	}
	for (e = 1; e <= 4; e++)
	{
		for(int h=1;h<=e;h++)
			printf(" ");
		f = (9 - (2 * e));
		for (g = 1; g <= f; g++)
			printf("*");
		printf("\n");
	}

}