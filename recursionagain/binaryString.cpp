//Generate all binary string of size k with no consecutive one's

#include<bits/stdc++.h>
using namespace std;

void fun(vector<string>&ans,int n,string s)
{
    if(s.size()==n)
    {
        ans.push_back(s);
        return;
    }
    fun(ans,n,s+'0');
    if(s[s.size()-1]!='1')
    {
        fun(ans,n,s+'1');
    }
}

vector<string>binaryString(int n)
{
    vector<string>ans;
    fun(ans,n,"");
    return ans;
}
void printVector(vector<string>ans)
{
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
}
int main()
{
    int n=3;
    vector<string>ans=binaryString(n);
    printVector(ans);
    return 0;
}