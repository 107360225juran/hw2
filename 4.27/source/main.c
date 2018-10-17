#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j, g;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= i; j++)
		{
			for (g = 1; g <= j; g++)
			{
				if (i*i != j * j + g * g)
				{
					continue;
				}
				else
				{
					printf("hypotenuse=%d   side 1=%d  side2=%d\n" ,i, j, g);
				}
			}
		}
	}
	system("pause");
}