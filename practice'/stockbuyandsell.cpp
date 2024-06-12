#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    int buy;
    int sell;
};
vector<vector<int>>buySell(vector<int>a,int n)
{
    vector<vector<int>>res;
    if(n==1)
    return res;
    int count=0;
    Interval stock[n/2+1];
    int i=0;
    while(i<n-1)
    {
        while(i<n-1&&a[i+1]<=a[i])
        i++;
        if(i==n-1)
        break;
        stock[count].buy=i++;
        while(i<n&&a[i]>=a[i-1])
        i++;
        stock[count].sell=i-1;
        count++;
    }
    if(count==0)
    return res;
    else
    {
        for(int i=0;i<count;i++)
        {
            vector<int>temp;
            temp.push_back(stock[i].buy);
            temp.push_back(stock[i].sell);
            res.push_back(temp);
        }
    }
}