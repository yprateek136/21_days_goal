//Implement stack using array
#include<bits/stdc++.h>
using namespace std;
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
// Driver Code Ends
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyStack *sq = new MyStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    arr[++top]=x;
}
//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top!=-1)
        return arr[top--];
    else
        return -1;
}
