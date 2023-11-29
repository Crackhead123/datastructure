#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int leftMost(string &s)
{
    int l=s.length();
    int count[CHAR]={0};
    for(int i=0;i<l;i++)
    {
        count[s[i]]++;
    }
    for(int i=0;i<l;i++)
    {
        if(count[s[i]]>1)
        {
            return i;
        }
    }
    return -1;
}

int leftMostFun2(string &str)
{
    bool visit[CHAR]={false};
    int res=-1;
    for(int i=str.length()-1;i>=0;i--)
    {
        if(visit[str[i]]==true)
        {
            res=i;
        }
        else
        {
            visit[str[i]]=true;
        }
    }
    return res;
}

int main()
{
    string str="abbccd";
    cout<<leftMost(str);
    return 0;
}