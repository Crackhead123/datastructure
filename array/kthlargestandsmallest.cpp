#include <iostream>
using namespace std;


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int ksmallest(int a[],int n,int k)
{
    int i,j;
    bool swapped;
    for(i=0;i<k;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
    return a[k-1];
}

int klargest(int a[],int n,int k)
{
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
    return a[k-1];
}


int main()
{
    int *a=new int[10];
    int i,j,n,k,choose;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENT OF THE ARRAY:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER THE VALUE OF K:";
    cin>>k;
    cout<<"SELECT OPTION:1.For KTH LARGEST: or 2.FOR KTH SMALLEST:";
    cin>>choose;
    if(choose==1)
    {
        cout<<klargest(a,n,k);
    }
    else 
    {
        cout<<ksmallest(a,n,k);
    }
    return 0;
}

