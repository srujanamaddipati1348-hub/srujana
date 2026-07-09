#include<stdio.h>
struct emp
{
	int emp_id;
	char ename[20];
	float sal;
};
main()
{

	int i;
	struct emp e[3];
	for(i=0;i<3;i++)
	{
		printf("enter empolyee details %d",i+1);
		scanf("%d%s%f",&e[i].emp_id,e[i].ename,&e[i].sal);
	}
	for(i=0;i<3;i++)
	{
		printf("the details of employee are %d are :\n",i+1);
		printf("%d\n%s\n%f\n",e[i].emp_id,e[i].ename,e[i].sal);
	}
}
