#include<bits/stdc++.h>
using namespace std;

bool subarraySum(int a[],int n,int sum)
{
   int s=0,curr=0;
   for(int e=0;e<n;e++)
   {
    curr=curr+a[e];
    while(sum<curr)
    {
        curr-=a[s];
        s++;
    }
    if(curr==sum)
        return true;
   }
   return false;
}

int main()
{
    int a[]={1, 4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subarraySum(a , n , 0);
    return 0;
}