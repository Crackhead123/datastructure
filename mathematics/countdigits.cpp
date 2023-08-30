#include<string>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countdigit(string s)
{
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(isdigit(ch))
        {
            count++;
        }
    }
    return count;
}

int countdigit2(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    int s;
    cout<<"ENTER A NUMBER:";
    cin>>s;
    cout<<"The number of digits in the given number are:"<<countdigit2(s);
    return 0;
}