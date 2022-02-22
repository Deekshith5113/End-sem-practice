#include<stdio.h>
main()
{
	int h;
	printf("Enter the height in centimetres :");
	scanf("%d",&h);
	if (h==150)
	{
		printf("He/she is considered Average height");
	}
	else if (h>150)
	{
		printf("He/she is considered tall");
	}
	else
	{
		printf("He/she is considered short");
	}
}
