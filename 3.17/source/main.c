#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j,account;
	double balance, charges, credits,limit;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &account);
		if(account==-1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%lf", &balance);
		printf("Enter total charges:");
		scanf_s("%lf", & charges);
		printf("Enter total credits:");
		scanf_s("%lf", &credits);
		printf("Enter total credits limit:");
		scanf_s("%lf", &limit);
		balance = balance + charges - credits;
		printf("account:%d\n", account);
		printf("credit limit:%.2lf\n", limit);
		printf("balance:%.2lf\n", balance);
		if (balance > limit)
		{
			printf("credit limit Exceeded\n");
		}
		else
		{
			printf("credit limit NOT Exceeded");
		}
	}

}