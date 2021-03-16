#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// A function to implement bubble sort  
void bubbleSort(int a[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)   
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (a[j] > a[j+1])  
            {
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}  
}  
void printarray(int a[], int size)
{
	int i;
	for(i=0;i<size;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[]={64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(a)/sizeof(a[0]);  
    bubbleSort(a, n);  
    cout<<"Sorted array: \n";  
    printarray(a, n);  
    return 0; 
}
