#include <iostream>
using namespace std;

void common(int a1[],int a2[],int temp[],int m,int n,int &k)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(a1[i]<a2[j])
        {
            i++;
        }
        else if(a2[j]<a1[i])
        {
            j++;
        }
        else 
        {
            temp[k]=a1[i];
            i++;
            j++;
            k++;
        }
    }
}

int main()
{
    int arr1[] = { 1, 5, 10, 20, 40, 80 };
    int arr2[] = { 6, 7, 20, 80, 100 };
    int arr3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    int temp[200000];
    int ans[200000];
    int k=0;
    common(arr1,arr2,temp,n1,n2,k);
    int tempsize=k;
    k=0;
    common(arr3,temp,ans,n3,tempsize,k);
    cout<<"THE COMMON ELEMETS ON THREE ARRAY ARE:";
    for(int i=0;i<k;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}