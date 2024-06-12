#include<bits/stdc++.h>
using namespace std;

struct TwoStack
{
    int top1,top2;
    int cap;
    int *arr;

    TwoStack(int n)
    {
        cap=n;
        top1=-1;
        top2=n;
        arr=new int[n];
    }
    void push1(int x)
    {
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
        else
        {
            cout<<"Stack overflow";
            exit(1);
        }
    }
    void push2(int x)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]=x;
        }
        else
        {
            cout<<"Stack overflow";
            exit(1);
        }
    }

    int pop1()
    {
        if(top1>=0)
        {
            int res=arr[top1];
            top1--;
            return res;
        }
        else
        {
            cout<<"Stack Underflow";
            exit(1);
        }
    }
    int pop2()
    {
        if(top2<cap)
        {
            int res=arr[top2];
            top2++;
            return res;
        }
        else 
        {
            cout<<"Stack Underflow";
            exit(1);
        }
    }
};

int main()
{
    TwoStack s(10);
    s.push1(5);
    s.push1(10);
    s.push2(3);
    s.push2(4);
    cout << "Popped element from stack1 is "<<s.pop1(); 
    s.push2(40); 
    cout << "\nPopped element from stack2 is "<< s.pop2(); 
    return 0; 
}