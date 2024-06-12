#include<bits/stdc++.h>
using namespace std;
int todigit(char ch)
{
    return (ch-'0');
}
long long sumSubstrings(string s)
{
    long long mod=1e9+7;
    int n = s.length();
    int sum[n];
    sum[0]=todigit(s[0]);
    int res=sum[0];
    for(int i=1;i<n;i++)
    {
        int num=todigit(s[i]);
        sum[i]=(i+1)*num+10*sum[i-1];
        res+=sum[i];
    }
    return res;
}
int main()
{
    string s="1234";
    cout<<sumSubstrings(s)<<endl;
    return 0;
}