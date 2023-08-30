#include <iostream>
using namespace std;

void subarray(int a[],int n,int sum)
{
    int currentsum=a[0],start=0,i;
    for(i=1;i<n;i++)
    {
        while(currentsum>sum&&start<i-1)
        {
            currentsum-=a[start];
            start++;
        }
        if(currentsum==sum)
        {
            cout<<"THE SUBARRAY IS BETWEEN INDEX "<<start<<"and "<<i;
        }
        if(i<n)
        {
            currentsum+=a[i];
        }
    }
    cout<<"\nNO SUCH SUB ARRAY EXISTS";
}


int main()
{
    int arr[] ={ 1, 4};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    subarray(arr,size,sum);
    return 0;
}