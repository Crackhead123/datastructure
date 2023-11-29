#include<bits/stdc++.h>
using namespace std;

bool subseq2(string &str1,string &str2,int n,int m)
{
    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }

    if(str1[n-1]==str2[m-1])
    {
        return subseq2(str1,str2,n-1,m-1);
    }
    else
    {
        return subseq2(str1,str2,n-1,m);
    }
}

bool subseq(string &str1,string &str2,int n,int m)
{
    int j=0;
    for(int i=0;i<n&&j<m;i++)
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
    }
    return (j==m);
}
int main()
{
    string str1="ABCD";
    string str2="ABE";
    int n=str1.length();
    int m=str2.length();
    cout<<subseq(str1,str2,n,m);
    return 0;
 
}