#include<bits/stdc++.h>
using namespace std;
bool matching(char a,char b)
{
    return ((a=='{'&&b=='}')||(a=='('&&b==')')||(a=='['&&b==']'));
}
bool isBalanced(string str)
{
    stack<char>s;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        char x=str[i];
        if(x=='{'||x=='('||x=='[')
        {
            s.push(x);
        }
        else
        {
            if(s.empty()==true)
            {
                return false;
            }
            if(matching(s.top(),x)==false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}

int main()
{
   string s;
    cout << "Enter a string with parentheses: ";
    cin >> s;
    if (isBalanced(s)) {
        cout << "The parentheses in the string are balanced." << endl;
    } else {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}