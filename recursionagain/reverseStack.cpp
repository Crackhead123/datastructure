#include<bits/stdc++.h>
using namespace std;

void insertItem(stack<int>&s,int item)
{
    if(s.empty())
    {
        s.push(item);
        return;
    }
    int top=s.top();
    s.pop();
    insertItem(s,item);
    s.push(top);
}
void reverse(stack<int>&s)
{
    if(s.empty())
    return;
    int item=s.top();
    s.pop();
    reverse(s);
    insertItem(s,item);
}
int main()
{
    stack<int>s;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}