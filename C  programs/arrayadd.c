#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the value of the arr%d",i);
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("sum = %d\n",sum);
}
