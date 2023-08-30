//Find all even length binary sequences with same sum of first and second half bits


#include<bits/stdc++.h>
using namespace std;

void find(int diff,char* out,int start,int end)
{
    if(abs(diff)>(end-start+1)/2)
    {
        return;
    }
    if(start>end)
    {
        if(diff==0)
        {
            cout<<out<<" ";
            return;
        }
    }

    out[start]='0' , out[end]='1';
    find(diff+1,out,start+1,end-1);

    out[start]=out[end]='1';
    find(diff,out,start+1,end-1);

    out[start]=out[end]='0';
    find(diff,out,start+1,end-1);

    out[start]='1',out[end]='0';
    find(diff-1,out,start+1,end-1);
}


int main()
{
    int n=2;
    char out[2*n];
    out[2*n]='\0';
    find(0,out,0,2*n-1);
    return 0;
}