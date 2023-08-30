//Learning the use of structure
/*
struct Pair
{
    int max;
    int min;
}

structure is use to return multiple value from a function.
*/


#include <iostream>
using namespace std;


struct Pair
{
    int max;
    int min;
};


struct Pair getminmax(int a[],int n)
{
    int i;
    struct Pair maxmin;

    if(n==1)
    {
        maxmin.max=a[0];
        maxmin.min=a[0];
        return maxmin;
    }

    if(a[0]>a[1])
    {
        maxmin.max=a[0];
        maxmin.min=a[1];
    }
    else 
    {
        maxmin.max=a[1];
        maxmin.min=a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]>maxmin.max)
        {
            maxmin.max=a[i];
        }
        else if(a[i]<maxmin.min)
        {
            maxmin.min=a[i];
        }
    }

    return maxmin;
}


int main()
{
    struct Pair minmax;
    int *a = new int[10];
    int n,i;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENT THE ARRAY:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minmax=getminmax(a,n);
    cout<<"THE MINIMUM ELEMENT IS:"<<minmax.min<<endl;
    cout<<"THE MAXIMUM ELEMENT IS:"<<minmax.max;
    return 0;
}