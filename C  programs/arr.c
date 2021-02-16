/* Program to input values in array and Display them*/

#include <stdio.h>
int main()
{
	int i,arr[5];

	for(i=0;i<5;i++)
	{
		printf("Enter the element of arr[%d] \n",i);
		scanf("%d",&arr[i]);
	}
	printf("The element array are\n ");
	for(i=0;i<5;i++)
		printf("%d \n",arr[i]);
	printf("\n");

}