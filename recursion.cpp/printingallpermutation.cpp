#include<bits/stdc++.h>
using namespace std;

void permutation(string s,int i)
{
    if(i==s.length())
    {
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[j],s[i]);
    }
}

int main()
{
    string s="ABC";
    permutation(s,0);
    return 0;
}