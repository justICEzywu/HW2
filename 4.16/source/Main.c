#include <stdio.h>

int main()
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (k = 1; k <= (10 - j); k++)
			printf(" ");
		printf("\n");
	}

	printf("\n");

	for (i = 10; i >= 0; i--)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (k = 1; k <= (10 - j); k++)
			printf(" ");
		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= 10; i++)
	{

		for (j = 1; j < i; j++)
			printf(" ");
		for (k = 0; k <= (10-i); k++)
			printf("*");

		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= 10; i++)
	{

		for (j = 1; j <= (10 - i); j++)
			printf(" ");
		for (k = 1; k <= i; k++)
			printf("*");

		printf("\n");
	}

	printf("\n");


	return 0;
}