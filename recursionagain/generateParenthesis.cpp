//generate parenthesis string open brackets=closing bracket

#include<bits/stdc++.h>
using namespace std;
void fun(vector<string>&ans,int left,int right,vector<char>&temp,int n)
{
    if(left>=n&&right>=n)
    {
        string outputStr(temp.begin(),temp.end());
        ans.push_back(outputStr);
    }
    if(left<n)
        {
            temp.push_back('(');
            fun(ans,left+1,right,temp,n);
            temp.pop_back();
        }
        if(right<left)
        {
            temp.push_back(')');
            fun(ans,left,right+1,temp,n);
            temp.pop_back();
        }
}
vector<string>generateParenthesis(int n)
{
    vector<string>ans;
    vector<char>temp;
    fun(ans,0,0,temp,n);
    return ans;
}


int main()
{
    int n=3;
    vector<string>ans=generateParenthesis(n);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}