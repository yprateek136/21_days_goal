/*Passing whole array to a function */

#include<stdio.h>
void func(int val[]);
int 	main()
{
	int i,arr[6]={1,2,3,4,5,6};
	func(arr);
	printf("function of the array now :");
	for(i=0;i<6;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	
}

void func(int val[])
{
        int i,sum=0;
	for(i=0;i<6;i++)
	{
		val[i]=val[i]*val[i];
		sum+=val[i];
	}
	printf("the sum of squre is = %d",sum);
}
