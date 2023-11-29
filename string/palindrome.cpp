#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &str)
{
    int low=0,high=str.length()-1;
    while(low<=high)
    {
        if(str[low]==str[high])
        {
            low++;
            high--;
        }
        else
        {
            return false;

        }
    }
    return true;
}


int main()
{
    string str="ABA";
    cout<<palindrome(str);
    return 0;
}
