#include<bits/stdc++.h>
using namespace std;

string convertToHex(int num)
{
    string temp="";
    while(num!=0)
    {
        int rem=num%16;
        char c;
        if(rem<10)
        {
            c=rem+48;
        }
        else
        {
            c=rem+87;
        }
        temp+=c;
        num=num/16;
    }
    return temp;
}

string encryptString(string S,int n)
{
    string ans="";

    for (int i=0;i<n;i++)
    {
        char ch =S[i];
        int count=0;
        string hex;

        while(i<n&&S[i]==ch)
        {
            count++;
            i++;
        }
        i--;

        hex=convertToHex(count);

        ans+=ch;
        ans+=hex;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main()
{
    string s="abc";
    int n=s.size();

    cout<<encryptString(s,n);
    return 0;
}