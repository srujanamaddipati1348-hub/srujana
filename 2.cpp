#include<stdio.h>
#include<math.h>
int main()
{
	float num,result;
	
	printf("Enter the number:");
	scanf("%f",&num);
	
	result=sqrt(num);
	
	printf("square root of %.2f is %.2f\n",num,result);
	
	return 0;
}
	
