#include<bits/stdc++.h>
using namespace std;


void snakePrintingMatrix(int *a[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;i<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            int k=n-1;
            while(k>=0)
            {
                cout<<a[i][k--]<<" ";
            }
        }
    }
}

int main()
{
    iint arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};


}