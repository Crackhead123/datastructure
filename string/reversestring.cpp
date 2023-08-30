#include <iostream>
#include <string>

using namespace std;


string reverseString(string s)
{
    string ans="";
    string temp="";

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch==' ')
        {
            if(temp!="")
            {
                ans=temp+" "+ans;
            }
            temp= "";
        }
        else 
        {
            temp+=ch;
        }
    }
    if(temp!="")
    {
        ans = temp+" "+ans;
    }
    if(ans.length()>0&&ans[ans.length()-1]==' ')
    {
        ans=ans.substr(0,ans.length()-1);
    }
    return ans;
}

int main()
{
    string str = "i like this program very much";
 
    str = reverseString(str);
 
    cout << str;
 
    return 0;
}