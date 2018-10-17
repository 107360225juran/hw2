#include<stdio.h>
#include<stdlib.h>
main()
{
      while(1)
	  {
		int mode = 0,number;
		double salary=0, sum = 0, hours,sales;
		printf("please choose mode :");
		scanf_s("%d", &mode);
		if (mode == -1)
		{
			break;
		}
		  switch (mode)
		  {
		  case 1:
			    printf("Enter weekly salary :");
			    scanf_s("%lf", &salary);
			    printf("weekly salary : %.2lf\n", salary);
				break;
		  case 2:
			  printf("Enter hourly salary :");
			  scanf_s("%lf", &salary);
			  printf("Enter hours :");
			  scanf_s("%lf", &hours);
			  if (hours > 40)
			  {
				  sum = 40 * salary + (hours - 40)*salary*1.5;
			  }
			  else
			  {
				  sum = salary * hours;
			  }
			  printf("weekly salary : %.2lf\n", sum);
			  break;
		  case 3:
			  printf("Enter sales amount :");
			  scanf_s("%lf", &sales);
			  printf("weekly salary : %.2lf\n", sales*0.057+250);
			  break;
		  case 4:
			  printf("Enter number of production :");
		      scanf_s("%d", &number);
			  printf("Enter single production of compensation :");
			  scanf_s("%lf", &salary);
			  printf("weekly salary : %.2lf\n", salary*number);
			  break;
			 
		  default:
			  printf("Error\n");
		  break;
		  }
	  }
	  system("pause");
	  return 0;
}