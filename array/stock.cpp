#include<bits/stdc++.h>
using namespace std;

int stockProfit(int a[],int n)           //a[]={1,5,}
{
  int profit=0;
  for(int i=1;i<n;i++)
  {
    if(a[i]>a[i-1])
    {
        profit+=a[i]-a[i-1];
    }
  }
  return profit;
}

int main()
{
    int a[]={100, 180, 260, 310, 40, 535, 695};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<stockProfit(a,n);
    return 0;
}