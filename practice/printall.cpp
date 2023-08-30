#include<bits/stdc++.h>
using namespace std;

void printSub(char s[],int k,string curr,int n)
{
    if(k==0)
    {
        cout<<curr<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        string new_curr;

        new_curr=curr+s[i];
        printSub(s,k-1,new_curr,n);
    }

}

int main()
{
    char s[]={'a','b'};
    int k=3;
    string curr="";
    int n=sizeof(s)/sizeof(s[0]);
    printSub(s,k,curr,n);
    return 0;
}