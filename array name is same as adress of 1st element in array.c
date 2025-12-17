#include<stdio.h>
int main()
{
	int x[4],i;
	for(i=0;i<4;i++)
	{
		printf("the adress of x[%d] is %ld\n",i,&x[i]);
	}
	printf("the adress of array is %ld",x);
}
