#include<stdio.h>
main()
{
	int matrix[2][3]={{7,3,4},{32,4,6}};
	int i,j;
	printf("the matrix is :\n");
    for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
