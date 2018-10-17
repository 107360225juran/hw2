#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i ,j,rates;
	double total = 5000;
	for (i = 0; i <= 4; i++)
	{
		if (i == 0)
		{
			rates = 10;
		}
		if (i == 1)
		{
			rates = 10.5;
		}
		if (i == 2)
		{
			rates = 11;
		}
		if (i == 3)
		{
			rates = 11.5;
		}
		if (i == 4)
		{
			rates = 12;
		}
		for (j = 1; j <= 15; j++)
		{
			total = total + total* rates / 100;
		}
		printf("%.2lf\n", total);
	}

	system("pause");
}