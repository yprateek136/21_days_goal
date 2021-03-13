//Iterative implementation of Binary Search
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int arr[],int l ,int r , int x)
{
	while(l<=r)
	{	
		int mid = (r+l)/2;
		if(arr[mid] == x)
		{
			return mid;
		}
		else if(arr[mid]<x)
		{
				l= mid+1;
		}
		else
		{	
			r =mid-1;
		}
		
	}
	return -1;
}
int main(void)
{
	int arr[]={2,3,4,10,40};
	int x =50;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = Binarysearch(arr ,0 ,n-1 ,x);
	(result == -1)?cout<<"Element not present arr  ":cout<<"Element prsent at index ";
	cout<<result;
	return 0;
}
