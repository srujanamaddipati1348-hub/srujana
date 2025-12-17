#include<stdio.h>
int main()
{
	void *p;
	int x=2;
	float y=4.3;
	p=&x;
	printf("the x value is %d",p);
	printf("the adress of x is %ld",p);
	p=&y;
	printf("the y value is %d",p);
	printf("the adress of y is %ld",p);
	return 0 ;
}
