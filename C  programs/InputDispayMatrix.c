/*program to input and display a matrix */

#define ROW 3
#define COL 4
#include <stdio.h>
int main()
{
	/* code */
	int i,j,MAT[ROW][COL];
	printf("Enter the element of the matrix %d%d row wise \n",ROW,COL );
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&MAT[i][j]);
	printf("the matrix you have entered is :\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%d ",MAT[i][j] );
		printf("\n");
	}
	printf("\n");
	return 0;
}