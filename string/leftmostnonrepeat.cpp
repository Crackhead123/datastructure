#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int leftMostNonRepeatFun1(string &str)
{
    int visit[CHAR];
    fill(visit,visit+CHAR,-1);
    for(int i=0;i<str.length();i++)
    {
        if(visit[str[i]]==-1)
        {
            visit[str[i]]=i;
        }
        else
        {
            visit[str[i]]=-2;
        }
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++)
    {
        if(visit[i]>=0)
        {
            res=min(res,visit[i]);
        }
    }
    return (res==INT_MAX)?-1:res;
}
int leftMostNonRepeat(string &str)
{
    int visit[CHAR]={0};
    int l=str.length();
    int res=-1;
    for(int i=0;i<l;i++)
    {
        visit[str[i]]++;
    }
    for(int i=l-1;i>=0;i--)
    {
        if(visit[str[i]]==1)
        {
            res=i;
        }
    }
    return res;
}

int main()
{
    string str="abcabc";
    cout<<leftMostNonRepeatFun1(str);
    return 0;
}