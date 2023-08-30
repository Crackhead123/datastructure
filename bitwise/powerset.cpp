//Program to return the power set of a given string
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void powerSet(string s)
{
    int len=s.length();
    int k=(1 << len);
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<len;j++)
        {
            if((i & (1 << j))!=0)
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}


int main()
{
    string s="abc";
    powerSet(s);
    return 0;
}