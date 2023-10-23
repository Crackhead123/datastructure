#include<bits/stdc++.h>
using namespace std;

 void segregateArr (int arr[], int n) 
    { 
    	int j = 0, i; 
    	for(i = 0; i < n; i++) 
    	{ 
    	    if(arr[i] <= 0) 
    	    { 
    	        //changing the position of negative numbers and 0.
    	        swap(arr[i], arr[j]); 
    	        //incrementing count of non-positive integers.
    	        j++; 
    		} 
    	}
    } 
int main()
{
    int a[]={0,-10,1,3,-20};
    int n=sizeof(a)/sizeof(a[0]);
    segregateArr(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}