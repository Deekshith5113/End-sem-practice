#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the numbers :");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c&&c==a)
	{
		printf("3\n");
	}
	else if (a==b||b==c||c==a)
	{
		printf("2");
	}
	else
	{
		printf("0");
	}
}
