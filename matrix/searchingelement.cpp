#include<bits/stdc++.h>
using namespace std;


bool searchElement(int *arr[],int m,int n,int k)
{
    int r=0,c=n-1;
    while(r<m&&c>=0)
    {
        if(arr[r][c]==k)
        {
            return 1;
        }
        if(arr[r][c]>k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return 0;
}
int main()
{
    int m=4,n=4;
    int *arr[m];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<m;i++)
    {
        arr[i]= new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k;
    cout<<"Enter element to be searched: ";
    cin>>k;
    cout<<searchElement(arr,m,n,k);
    return 0;
}