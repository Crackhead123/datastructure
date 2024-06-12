#include<bits/stdc++.h>
using namespace std;

bool isPal(int i,int j,string s)
{
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(vector<vector<string>>&ans,int start,vector<string>&temp,string s)
{
    if(start==s.size())
    {
        ans.push_back(temp);
        return;
    }

    for(int i=start;i<s.size();i++)
    {
        if(isPal(start,i,s))
        {
            temp.push_back(s.substr(start,i-start+1));
            solve(ans,i+1,temp,s);
            temp.pop_back();
        }
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>>ans;
    vector<string>temp;
    int start=0;
    solve(ans,start,temp,s);
    return ans;
}

int main()
{
    string s="aab";
    vector<vector<string>>ans=partition(s);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}