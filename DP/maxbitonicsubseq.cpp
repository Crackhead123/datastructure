//Maximum length of bitonic subsequence
#include <iostream>
#include <string.h>
using namespace std;


int LIS( int arr[], int n )  
{  
    int lis[n]; 
   
    lis[0] = 1;    
  
  
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j])  
                lis[i] = max(lis[i], lis[j] + 1);  
    } 
    int lis1[n];
    lis1[n-1] = 1;    
  
  
    for (int i = n-2; i>=0; i-- )  
    { 
        lis1[i] = 1; 
        for (int j = n-1; j >i; j-- )   
            if ( arr[i] > arr[j])  
                lis1[i] = max(lis1[i], lis1[j] + 1);  
    } 
    int res = lis[0]+lis1[0]-1;
    
    for(int i=1;i<n;i++)
    {
        res = max(lis[i]+lis1[i]-1, res);
    }
    
    return res;
 
}  

int main() {
	
	
int arr[] ={3, 4, 2, 8, 10, 5, 1};
int n = 7;

cout<<LIS(arr, n);
	

}