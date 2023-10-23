#include<bits/stdc++.h>
using namespace std;

int rangeMax(int left[],int right[],int n)
{
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {
        freq[left[i]]=1;
        freq[right[i]+1]=-1;
    }

    int size=sizeof(freq)/sizeof(freq[0]);
    int res=0;
    for(int i=1;i<100;i++)
    {
        freq[i]=freq[i]+freq[i-1];
        if(freq[i]>freq[res])
        {
            res=i;
        }
    }
    return res;
}

int main()
{
   int L[ ] = {1, 4, 3, 1}, R[ ] = {15, 8, 5, 4};
   int n=sizeof(L)/sizeof(L[0]);
   cout<<rangeMax(L,R,n);
   return 0;
}