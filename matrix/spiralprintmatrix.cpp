#include<bits/stdc++.h>
using namespace std;

const int R=4,C=4;
void spiralMatrix(int a[R][C])
{
    int top=0,left=0,buttom=R-1,right=C-1;
    while(top<=buttom&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<a[top][i]<<" ";
        }
        cout<<endl;
        top++;
        for(int i=top;i<=buttom;i++)
        {
            cout<<a[i][right]<<" ";
        }
        cout<<endl;
        right--;
        if(top<=buttom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<a[buttom][i]<<" ";
            }
            cout<<endl;
            buttom--;
        }
        if(left<=right)
        {
            for(int i=buttom;i>=top;i--)
            {
                cout<<a[i][left]<<" ";
            }
            cout<<endl;
            left++;
        }

    }
}

int main()
{
    int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    spiralMatrix(arr);
    return 0;
}