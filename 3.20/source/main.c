#include<stdio.h>
#include<stdlib.h>
main()
{
	int hours;
	double rate, salary;
	printf("Enter # of hours worked(-1 to end):");
	while (scanf_s("%d", &hours) == 1) 
	{
		if ((int)hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%lf",&rate);
		
		if (hours > 40)
		{
			salary = (hours - 40)*1.5*rate + 40 * rate;
			printf("Salary is %.2lf\n", salary);
			printf("\n");
		}
		else 
		{
			salary = hours * rate;
			printf("Salary is %.2lf\n", salary);
			printf("\n");
		}
		printf("Enter # of hours worked(-1 to end):");
	}

}