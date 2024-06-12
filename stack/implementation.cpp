#include<bits/stdc++.h>
using namespace std;

struct Mystack
{
    int cap;
    int *arr;
    int top;
    
    Mystack (int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int data)
    {
        top++;
        arr[top]=data;
    }
    int pop()
    {
        int result=arr[top];
        top--;
        return result;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};

int main()
{
    Mystack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    s.push(35);
    s.push(40);
    cout<<s.peek()<<endl;
}