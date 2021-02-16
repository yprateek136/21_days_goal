#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
 int withdraw;
 float balance;
 cout <<"please enter the withdraw amount";
 cin>>withdraw;
 cout <<"please enter saving account balance";
 cin>>balance;
 if((withdraw%5==0)&&(balance>(withdraw+0.50)))
 cout <<(balance-withdraw-0.50);
 else
 cout<<"insufficient balance in saving account your balance is =" <<balance;
 
}
