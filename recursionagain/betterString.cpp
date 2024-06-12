#include<bits/stdc++.h>
using namespace std;

int fun(string s,int n)
{
    int count=1;
    unordered_map<char,int>map;
    for(int i=0;i<n;i++)
    {
        if(map[s[i]]==0)
        {
            map[s[i]]=count;
            count*=2;
        }
        else
        {
            int temp=map[s[i]];
            map[s[i]]=count;
            count*=2;
            count-=temp;
        }
    }
    return count;
}

string betterString(string s1,string s2)
{
    if(fun(s1,s1.size())>=fun(s2,s2.size()))
    return s1;
    else
    return s2;
}

int main()
{
    string s1="a",s2="b";
    cout<<betterString(s1,s2);
    return 0;
}