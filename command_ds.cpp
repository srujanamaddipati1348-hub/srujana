#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[20];
	int m1,m2,m3;
	int total;
};
main(int argc,char*argv[])
{
	struct student s;
	strcpy(s.name,argv[1]);
	s.m1=atoi(argv[2]);
	s.m2=atoi(argv[3]);
	s.m3=atoi(argv[4]);
	s.total=s.m1+s.m2+s.m3;
	printf("student name   : %s\n",s.name);
	printf("marks          :%d%d%d\n",s.m1,s.m2,s.m3);
	printf("total marks    :%d\n",s.total);
}
