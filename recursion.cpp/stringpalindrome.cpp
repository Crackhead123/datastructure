#include<bits/stdc++.h>
using namespace std;

bool stringPalin(string s,int low,int high)
{
    if(low>=high)
    {
        return true;
    }
    if(s[low]==s[high])
    {
        stringPalin(s,low+1,high-1);
    }
}

int main()
{
    string s="geeks";
    int n=s.length();
    if(stringPalin(s,0,n-1))
    {
        cout<<"Palindrome";
    }
    else 
    {
        cout<<"Not Palindrome";
    }
    return 0;
}