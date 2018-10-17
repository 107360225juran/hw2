#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j,s,a;
	for (s= 1; s<= 4; s++)
	{
		if (s == 1)
		{
			for (i = 1; i <= 10; i++)
			{
				for (j = 1; j <= i; j++)
				{
					printf("%s", "*");
				}
				printf("\n");
			}
			printf("\n");
		}
		if (s == 2)
		{
			for (i = 10; i>=1; i--)
			{
				for (j = 1; j <= i; j++)
				{
					printf("%s", "*");
				}
				printf("\n");
			}
		}
		if (s == 3) 
		{
			for (i = 1; i <= 10; i++)
			{
				for (j = 1; j <= 10; j++)
				{
					if(j-i>=0)
					{
						printf("%s", "*");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		if (s == 4) 
		{
			for (i = 10; i >= 0; i--)
			{
				for (j = 1; j <= 10; j++)
				{
					if (i - j >= 0)
					{
						printf(" ");
					}
					else
					{
						printf("%s", "*");
					}
				}
				printf("\n");
			}
			system("pause");
		}
	}
}