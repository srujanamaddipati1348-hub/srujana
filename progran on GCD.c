#include<stdio.h>
int GCD(int,int);
main()
{
	int n1,n2;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("the GCD of %d and %d is %d",n1,n2,GCD(n1,n2));
}
int GCD(int n1,int n2)
{
	if(n2!=0)
	{
		return GCD(n1,n1%n2);
	}
	else 
	{
		return n1;
	}
}

