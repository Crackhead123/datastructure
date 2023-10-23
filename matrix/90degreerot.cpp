#include<bits/stdc++.h>
using namespace std;

const int R=4,C=4;

void transpose(int a[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=i+1;j<C;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
}

void rowSwap(int a[R][C])
{
    int low=0,high=R-1;
    while(low<=high)
    {
        for(int i=0;i<C;i++)
        {
            swap(a[low][i],a[high][i]);
        }
        low++;
        high--;
    }
}


int main()
{
    int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};


    transpose(arr);
    rowSwap(arr);
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}