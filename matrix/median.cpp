#include<bits/stdc++.h>
using namespace std;

const int MAX=100;

int medianMatrix(int a[][MAX],int r,int c)
{
    int min=a[0][0],max=a[0][c-1];
    for(int i=1;i<r;i++)
    {
        if(a[i][0]<min)
        {
            min=a[i][0];
        }
        if(a[i][c-1]>max)
        {
            max=a[i][c-1];
        }
    }

    int medPos=(r*c+1)/2;
    while(min<max)
    {
        int mid=(min+max)/2;
        int midpos=0;
        for(int i=0;i<r;i++)
        {
            midpos+=upper_bound(a[i],a[i]+c,mid)-a[i];
        }
        if(midpos<medPos)
        {
            min=mid+1;
        }
        else 
        {
            max=mid;
        }
    }
    return min;
}

int main()
{
	int r = 3, c = 5;
	int m[][MAX]= { {5,10,20,30,40}, {1,2,3,4,6}, {11,13,15,17,19} };
	cout << "Median is " << medianMatrix(m, r, c) << endl;
	return 0;
}