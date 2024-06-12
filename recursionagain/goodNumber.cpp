#include<bits/stdc++.h>
using namespace std;

vector<int>res;

bool check(int a,int digit,bool first=false,int sum=0)
{
    if(a==0)
    return true;

    int rem=a%10;
    if(rem==digit)
    return false;
    if(first&&rem<=sum)
    return false;

    return check(a/10,digit,true,sum+rem);
}
vector<int>goodNum(int a,int b,int digit)
{
    if(a==b+1)
    return res;

    if(check(a,digit))
    res.push_back(a);

    return goodNum(a+1,b,digit);
}

void printVector(vector<int>ans)
{
    for(auto x:res)
    cout<<x<<" ";
}

int main()
{
    int a=840,b=850,digit=6;
    vector<int>ans=goodNum(a,b,digit);
    printVector(ans);
    return 0;
}