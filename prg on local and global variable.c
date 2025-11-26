#include<stdio.h>
int x=10;//global variable
void display();
main()
{
	int y=20;//local variable
	printf("the value of x is %d\n",x);
	printf("the value of y is %d\n",y);
	 printf("the value of z is %d\n",z);//error
	display();
}
void display()
{
    int z=30;//local variable
    printf("the value of z is %d\n",z);
    printf("the value of x is %d\n",x);
    printf("the value of y is %d\n",y);//error
}
