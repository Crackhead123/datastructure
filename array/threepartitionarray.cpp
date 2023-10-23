#include<bits/stdc++.h>
using namespace std;

bool partition(int a[],int n)
{
    int low=0,high=n-1;
    int lsum=0,rsum=0,msum=0;
    while(low<high)
    {
        lsum+=a[low];
        rsum+=a[high];
        if(lsum>rsum)
        {
            high--;
        }
        else
        {
            low++;
        }
        if(lsum==rsum)
        {
            int l=low;
            while(l<=high-1)
            {
                msum+=a[l];
                l++;
            }
            if(msum==lsum)
            return true;
        }
    }
    return false;
}
int main()
{
    int a[]={5,2,6,1,1,1,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<partition(a,n);
    return 0;
}