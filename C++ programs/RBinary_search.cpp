//Recursive implementation of Binary Search
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int RBinarysearch(int arr[] ,int l ,int r ,int x)
{
	if(r>=l)
	{
		int mid =(r+l)/2;
		if(arr [mid] == x)
		{
			return mid;
		}
		else if(arr[mid]>x)
		{
			return RBinarysearch(arr ,l ,mid-1 ,x);
		}
		else if(arr[mid]<x)
		{	
			return RBinarysearch(arr ,mid+1 ,r ,x);
		}
	}
	return -1;
}
int main(void)
{
	int arr[]={2,3,4,10,40};
	int x = 20;
	int n= sizeof(arr) / sizeof(arr[0]);
	int result = RBinarysearch(arr , 0, n-1, x);
	(result == -1)?cout<<"Element is not in arr  ":cout<<"Element is present at index  :";
	cout<<result;
	return 0;	
}
