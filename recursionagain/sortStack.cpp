#include<bits/stdc++.h>
using namespace std;


void sort(stack<int>&s)
{
    if(s.empty())
    return ;

    int x=s.top();
    s.pop();
    sort(s);
    stack<int>temp;
    while(!s.empty()&&s.top()>x)
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int>s;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);
    sort(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}