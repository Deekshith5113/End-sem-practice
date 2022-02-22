#include<stdio.h>
main()
{
	float fine,d;
	printf("Enter the number of days given late :");
	scanf("%f",&d);
	if (d<6)
	{
		fine=(0.4*d);
	}
	else if (d<11)
	{
		fine=(0.65*(d));
	}
	else
	{
		fine=(0.8*(d));
	}
	printf("the fine is %.3f",fine);
}
