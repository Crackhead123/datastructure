#include<bits/stdc++.h>
using namespace std;

void substring(string s,string curr,int i)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return;
    }

    substring(s,curr,i+1);
    substring(s,curr+s[i],i+1);
}

int main()
{
    string s="ab";
    int i=0;
    string curr="";
    substring(s,curr,i);
    return 0;
}