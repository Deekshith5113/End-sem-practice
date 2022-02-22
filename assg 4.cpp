#include<stdio.h>
main()
{
	char c;
	printf("Enter the character :");
	scanf("%c",&c);
	if (c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
		printf("It is a alphabet");
	}
	else if (c>='0'&&c<='9')
	{
		printf("It is a digit");
	}
	else
	{
		printf("It is invalid input");
	}
}
