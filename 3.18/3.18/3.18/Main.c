#include <stdio.h>

int main()
{
	float salary;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &salary);
		if (salary == -1)
			break;
		printf("Salary is: $%.2f\n", 0.09*salary + 200);


	}
	return 0;
}