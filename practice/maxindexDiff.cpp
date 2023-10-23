#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(int A[],int N)
{
    int maxArray[N],minArray[N];
    maxArray[N-1]=A[N-1];
    for(int i=N-2;i>=0;i--)
    {
        maxArray[i]=max(maxArray[i+1],A[i]);
    }

    minArray[0]=A[0];
    for(int i=1;i<N;i++)
    {
        minArray[i]=min(minArray[i-1],A[i]);
    }

    int res=0;
    for(int i=1,j=N-1;j>=0,i<N;i++,j--)
    {
        if(minArray[i]<=maxArray[j])
        {
            res=max(res,j-i);
        }
    }
    return res;
}