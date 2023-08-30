#include <iostream>
using namespace std;


int missingelement(int a[],int n)
{
    int i;
    int total = (n+1)*(n+2)/2;
    for(i=0;i<n;i++)
    {
        total-=a[i];
    }
    return total;
}


int main()
{
    int arr[]={1,2,3,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"THE MISSING ELEMET IS:"<<missingelement(arr,size);
    return 0;
}