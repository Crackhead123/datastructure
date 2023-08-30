#include <iostream>
using namespace std;

void swap(int a[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(a[start]<0)
        {
            start++;
        }
        else 
        {
            int temp=a[end];
            a[end]=a[start];
            a[start]=temp;
            end--;
        }
    }
}

void printarray(int a[],int n)
{
    int i;
    cout<<"THE SORTED ARRAY IS:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
}

int main()
{
    int a[]={-12,11,-13,-5,6,-7,5,-3,-6};
    int size =sizeof(a)/sizeof(a[0]);
    //print the original array before sorting it.
    printarray(a,size);
    cout<<endl;
    //sort the give array.
    swap(a,size);   
    //printing the sorted array.
    printarray(a,size);
    return 0;
}