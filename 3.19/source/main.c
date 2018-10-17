#include<stdio.h>
#include<stdlib.h>
main()
{
	int days=0;
	double principal=0, rate=0,charge=0;
		while (1)
		{
			printf("Enter loan principal(-1 to end):");
			scanf_s("%lf", &principal);
			if ((int)principal == -1)
			{
				break;
			}
			printf("Enter interest rate:");
			scanf_s("%lf", &rate);
			printf("Enter term of the loan in days :");
			scanf_s("%d", &days);
			charge = principal * rate*days/365;
			printf("the interest charge is $%.2lf\n", charge);

		}
}