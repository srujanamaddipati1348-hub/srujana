#include<stdio.h> 
int main()
{
	float celsius, fahrenheit;
	int choice;
	printf("Temperature conversion\n");
	printf("1.Fahrenheit to celsius\n");
	printf("2.celsius to fahrenheit\n");
	printf("Enter the choice");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter temperature in fahrenheit:");
		scanf("f",&fahrenheit);
		celsius=(fahrenheit-32)*5/9;
		printf("temperature in celsius=%.2f,celsius");
	}
	else if (choice==2)
	{
		printf("Enter temperature in celsius:");
		scanf("%f",&celsius);	
		
		fahrenheit=(celsius*9/5)+32;
		printf("Tenperature in fahrenheit=%.2f",fahrenheit);
	}
	else
	{
		printf("Invalid choice");	
	}
	return 0;
}
