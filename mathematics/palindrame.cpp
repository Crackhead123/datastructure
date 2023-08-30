#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(int n)
{
    int res,q=0,temp=n;
    while(temp!=0)
    {
        res=temp%10;
        q=(q*10)+res;
        temp=temp/10;
    }
    if(q==n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


int main()
{
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    if(isPalindrome(n)==true)
    {
        cout<<"Palindrome Number";
    }
    else 
    {
        cout<<"Not a Palindrome number";
    }
    return 0;
}