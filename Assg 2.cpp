#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the side sof the traingle :");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c&&b+c>a&&c+a>b)
	{
		if (a==b&&b==c&&c==a)
		{
			printf("The traingle is possible\n");
			printf("It is a equilateral traingle");
		}
		else if (a==b||b==c||c==a)
		{
			printf("The traingle is possible\n");
			printf("It is a Isoceseles traingle");
		}
		else
		{
			printf("The traingle is possible\n");
			printf("It is a scalene traingle");
		}
	}
	else
	{
		printf("The traingle is not possible");
	}
}
