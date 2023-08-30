#include <iostream>
using namespace std;


int reversearray(int a[],int start,int end)
{
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

int printarray(int a[],int n)
{
    int i;
    cout<<"THE REVERSE ARRAY IS:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int *a=new int[20];
    int i,n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENT OF THE ARRAY:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reversearray(a,0,n-1);
    printarray(a,n);
    return 0;
}


//reverse array with recursion

/*
#include <iostream>
using namespace std;

int reversearray(int a[],int start,int end)
{
    if(start>=end)
    {
        return 0;
    }

    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    reversearray(a,start+1,end-1);
}


int printarray(int a[],int n)
{
    int i;
    cout<<"THE REVERSE ARRAY IS:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int *a=new int[20];
    int i,n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENT OF THE ARRAY:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reversearray(a,0,n-1);
    printarray(a,n);
    return 0;
}
*/