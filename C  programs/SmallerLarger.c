/*Program to find smaller and larger no in array*/

#include<stdio.h>
int main()
{
	int i,arr[10]={99,2,3,4,5,6,7,8,9,10},small,large;
	large=small=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i] < small)
		small= arr[i];

		if(arr[i] > large)
		large = arr[i];

	}
	printf("smallest=%d ,largest=%d",small ,large);

}