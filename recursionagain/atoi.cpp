#include<bits/stdc++.h>
using namespace std;
long fun(string s,int sign,int i,long result)
{
    if(sign*result>=INT_MAX)
    return INT_MAX;
    if(sign*result<=INT_MIN)
        return INT_MIN;
    if(i>=s.size()&&(s[i]<'0'||s[i]>'9'))
        return sign*result;
    result=fun(s,sign,i+1,result*10+(s[i]-'0'));
    return result;
}
int create(string s)
{
    int i=0,n=s.size(),sign=1;
    while(i<n&&s[i]==' ')
    {
        i++;
    }
    if(s[i]=='-')
    sign*=-1;
    if(s[i]=='+')
    i++;

    return fun(s,sign,i,0);
}

int main()
{
    string s="1234";
    cout<<create(s);
    return 0;
}
