#include<stdio.h>
#include<string.h>
struct emp
{
	int eid;
	char ename[20];
	float sal;
}e1,e2;
main()
{
	e1.eid=534;
	strcpy(e1.ename,"sruju");
	e1.sal=45894;
	e2=e1;   //emp1 details are copied to  emp2
	printf("the emp2 are details are:\n");
	printf("%d\t%s\t%0.2f\n",e2.eid,e2.ename,e2.sal);
}

