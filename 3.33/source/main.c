#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j, raw=0;
	scanf_s("%d", &raw);
	for (i = 1; i <= raw; i++)
	{
		if (i == 1 || i == raw)
		{
			printf("++++++++++++\n");
		}
		else
		{
			printf("+          +\n");
		}
    }
	system("pause");
}
