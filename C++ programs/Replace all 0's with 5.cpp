#include <bits/stdc++.h>
using namespace std;
int convertFive(int n);
//Driver Code Ends
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
int convertFive(int n)
{
    int placevalue = 1,num=0,rem=0;
    if(n>10000)
    {
        return -1;
    }
    while(n)
    {
        rem=n%10;
        if(rem==0)
        {
            num=num+placevalue*5;
        }
        else 
            num = num + rem * placevalue;
        placevalue = placevalue * 10;
        n=n/10;
    }
    return num;
}
