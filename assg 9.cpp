#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b&&a<c)
	{
		printf("%d is the minimum number",a);
	}
	if (b<a&&b<c)
	{
		printf("%d is the minimum number",b);
	}
	if (c<a&&c<b)
	{
		printf("%d is the minimum number",c);
	}
	else
	{
		printf("Invalid input");
	}
}
