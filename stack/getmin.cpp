#include<bits/stdc++.h>
using  namespace std;

struct Mystack
{
    int *arr;
    int top,cap,min_value;

    Mystack(int n)
    {
        cap=n;
        arr=new int[cap];
        top=-1;
        min_value=INT_MAX;
    }
    void push(int x)
    {
        if(top==cap)
        {
            cout<<"Stack Overflow";
            return;
        }
        else
        {
            top++;
            arr[top]=x;
            min_value=min(min_value,x);
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow";
            return ;
        }
        else
        {
            top--;
        }
    }

    int getMin()
    {
        
    }
};
