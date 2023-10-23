#include<bits/stdc++.h>
using namespace std;

int maxGuestCount(int a[],int b[],int n, int m)
{
    sort(a,a+n);
    sort(b,b+m);
    int i=1,j=0,curr=1,res=1;
    while(i<n&&j<m)
    {
        if(a[i]<=b[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }

        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]={900,600,700};
    int dept[]={1000,800,730};
    cout<<maxGuestCount(arr,dept,sizeof(arr)/sizeof(*arr), sizeof(dept)/sizeof(*dept));
    return 0;
}