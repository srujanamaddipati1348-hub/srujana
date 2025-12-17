#include<stdio.h>
int main()
{
	int x=2;
	int *p,**pp;
	p=&x;
	pp=&p;
	printf("the adress of x is %ld\n",&x);
	printf("the value of x is %d\n",x);
	printf("the adress of x is %ld\n",p);
	printf("the value of x is %d\n",*p);
	printf("the adress of p is %ld\n",pp);
	printf("the value of p (adress of x)is %ld\n",*pp);
	printf("the value of x is %d\n",**pp);
}
