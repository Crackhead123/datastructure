#include <iostream>
using namespace std;

int sumpair(int a[],int n,int k)
{
    int i,p=0;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                p++;
            }
        }
    }
    return p;
}

int main()
{
    int a[]={1,5,7,-1};
    int size = sizeof(a)/sizeof(a[0]);
    int k = 6;
    cout<<"THE NUMBER OF PAIR OF SUM 6 are:"<<sumpair(a,size,k);
    return 0;
}