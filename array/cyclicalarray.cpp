#include <iostream>
using namespace std;

void cyclical(int a[],int n)
{
    int i,last=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=last;
}

void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    //print array before rotation

    printarray(a,size);

    //rotating the array
    cyclical(a,size);

    //printing the rotated array
    cout<<endl;
    printarray(a,size);
    return 0;

}