#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j,a=4,b=4,p,q,f=4,g=4;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a >= j || b <= j)
			{
				printf(" ");
			}
			else
			{
				printf("*");
				//printf("%d",a);
				//printf("%d", b);
			}
		}
		a--;
		b++;
		printf("\n");
	}

	for (p = 0; p <= 5;p++)
	{
		for (q = 0; q<=9; q++)
		{
			if ((f+q>4 && q<=3) || (q-g<4 && q>=4))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		f--;
		g--;
		printf("\n");
	}
	system("pause");
}