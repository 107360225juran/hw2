#include<stdio.h>
#include<stdlib.h>
main()
{
	float salesmoney;
	while (scanf_s("%f", &salesmoney) != EOF)
	{
		printf("Enter sales in dollars = %f\n", salesmoney);
		if (salesmoney == -1)
		{
			printf("\n");
		}
		else 
		{
			salesmoney = salesmoney * 9 / 100 + 200;
			printf("Salary is : %f", salesmoney);
		}
	}
}