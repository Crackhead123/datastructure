#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int power(int a,int b)
{
    int res=1;
    while(b>0)
    {
        if(b%2!=0)
        {
            res=res*a;
        }
        a=a*a;
        b=b/2;
    }
    return res;
}

int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"The given number is:"<<pow(a,b);
    return 0;
}