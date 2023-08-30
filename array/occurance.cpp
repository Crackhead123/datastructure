#include <iostream>
using namespace std;

int occur(int a[],int n,int num)
{
   int i,c=0;
   for(i=0;i<n;i++)
   {
    if(a[i]==num)
    {
        c++;
    }
   }
   return c;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    printf("%d", occur(arr, n, x));
    return 0;
}


