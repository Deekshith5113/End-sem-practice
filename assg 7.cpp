#include<stdio.h>
main()
{
	int d;
	printf("Enter the day of the week :");
	scanf("%d",&d);
	if (d==1)
	{
		printf("Sunday");
	}
	else if (d==2)
	{
		printf("Monday");
	}
	else if (d==3)
	{
		printf("Tuesday");
	}
	else if (d==4)
	{
		printf("Wednesday");
	}
	else if (d==5)
	{
		printf("Thursday");
	}
	else if (d==6)
	{
		printf("Friday");
	}
	else if (d==7)
	{
		printf("Saturday");
	}
	else 
	{
		printf("Invalid input");
	}
}
