#include <stdio.h>

int main()
{
	int a;
	float b;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &a);
		if (a == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &b);
		if (a > 40)
		{
			printf("Salary is $%.2f\n", (a*b) + ((a - 40)*(0.5*b)));
		}
		else
			printf("Salary is $%.2f\n", a*b);


	}
	return 0;
}