#include <stdio.h>

int main()
{
	int a, b;
	printf("�п�J���e: ");
	scanf("%d %d", &a,&b);
	for (int i = 1; i <= b; i++)
	{
		if (i == 1 || i == b)
		{
			for (int g = 1; g <= a; g++)
				printf("+");
		}
		else
		{
			printf("+");
			for (int h = 1; h <= (a-2); h++)
				printf(" ");
			printf("+");
		}
		printf("\n");



	}
	
	return 0;
}