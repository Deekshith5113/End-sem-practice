#include<stdio.h>
main()
{ 
	float pp,lp,sp,cp,l,p;
	printf("Enter the cost price :");
	scanf("%d",&cp);
	printf("Enter the selling price :");
	scanf("%d",&sp);
	if (sp>cp)
	{
		printf("it is profit\n");
		p=sp-cp;
		pp=(p/cp)*100;
		printf("The profit percentage is %f",pp);
	}
	else if (cp>sp)
	{
		printf("it is loss\n");
		l=cp-sp;
		lp=(l/cp)*100;
		printf("The loss percentage is %f",lp);
	}
	else 
	{
		printf("it is neither loss nor profit");
	}
}
