#include <stdio.h>

int main()
{
	int a = 5000;
	
	for (float i = 1.1; i <= 1.12; i=i+0.005)
	{
		for (int g = 1; g <= 3; g++)
		{
			printf("%.2f\n", a*i);
			a = a * i;
		}

	}
	return 0;
}