#include <stdio.h>

int main()
{
	int a;
	float b, c, d, e;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf("%d", &a);
		if (a == -1)
			break;
		printf("Enter beginning balance: ");
		scanf("%f", &b);
		printf("Enter total charges: ");
		scanf("%f", &c);
		printf("Enter total credits: ");
		scanf("%f", &d);
		printf("Enter credit limit: ");
		scanf("%f", &e);
		printf("Account:       %d\n", a);
		printf("Credit limit:  %.2f\n", e);
		printf("Balance:       %.2f\n", (b+c-d));
		if (b + c - d > e)
			printf("Credit Limit Exceded.\n\n");




	}
	return 0;
}