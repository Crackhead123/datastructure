#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(int n,int q)
{
   if(n==0)
   {
    return q;
   }
   q=q*10+(n%10);
   return checkPalindrome(n/10,q);
}


bool palindrome(int n)
{
    int q=0;
    if(checkPalindrome(n,q)==n)
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
    int n=121;
    if(palindrome(n)==true)
    {
        cout<<"Palindrome Number";
    }
    else 
    {
        cout<<"Not Palindrome Number";
    }
}