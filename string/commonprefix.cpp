#include<iostream>
#include<string.h>
using namespace std;

string common(string s1,string s2)
{
    string result;
    int j,i;
    int n1=s1.length();
    int n2=s2.length();
    for(i=0,j=0;i<=n1-1&&j<=n2-1;i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            break;
        }
        result.push_back(s1[i]);
    }
    return (result);
}

string given(string a[],int low,int high)
{
    if(low==high)
    {
        return  a[low];
    }
    if(high>low)
    {
        int mid=low+(high-low) / 2;
        string str1=given(a,low,mid);
        string str2 = given(a,mid+1,high);  

        return (common(str1,str2));
    }
}


int main()
{
    string arr[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};
    int n = sizeof (arr) / sizeof (arr[0]);
 
    string ans = given(arr, 0, n-1);
 
    if (ans.length())
        cout << "The longest common prefix is:"
             << ans;
    else
        cout << "There is no common prefix";
    return (0);
}