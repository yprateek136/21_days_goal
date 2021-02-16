/*Program to pass array elements as Function*/

#include <stdio.h>
void check(int num);
int main()
{
	int num,i,arr[10];
	printf("Enter ten the elements of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
}

void check(int num)
{
	if (num%2==0)
		printf("%d Even no\n",num);
	else;
	printf(" %d odd no\n",num);
}