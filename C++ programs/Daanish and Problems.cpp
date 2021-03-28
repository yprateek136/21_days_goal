#include <iostream>
using namespace std;

int main() 
{

      int t;
      cin>>t;
      while(t--)
      {
		  int arr[10];
          int k;
          for(int i=0;i<10;i++)
          cin>>arr[i]; 
          cin>>k;
          int i=9;
          while(k >= 0)
          {
              k = k - arr[i];
              i--;
          }
          cout<<i+2<<endl;
      }
	return 0;
}
