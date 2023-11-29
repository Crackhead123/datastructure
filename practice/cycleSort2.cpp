#include<bits/stdc++.h>
using namespace std;

void cycleSort(int a[],int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        int item=a[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
        {
            if(a[i]<item&&item!=a[i])
            pos++;
        }
        swap(a[pos],item);
        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
            {
                if(a[i]<item)
                pos++;
            }
            swap(a[pos],item);
        }
    }
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int  arr[] = {5,4,1,2,3,1} ;
    int n=sizeof(arr)/sizeof(arr[0]);
    cycleSort(arr,n);
    printArray(arr,n);
    return 0;
}