#include<bits/stdc++.h>
using namespace std;
void backTrack(const string &digits,int i,string temp,vector<string>&res,const unordered_map<char,string>&DtoL)
{
    if(i==digits.size())
    {
        res.push_back(temp);
        return;
    }

    string letters=DtoL.at(digits[i]);

    for(char letter:letters)
    {
        backTrack(digits,i+1,temp+letter,res,DtoL);
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string>res;
    if(digits.empty())
    return res;

    unordered_map<char,string>DtoL={
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

    backTrack(digits,0,"",res,DtoL);
    return res;
}
int main()
{
    string digits="23";
    vector<string>res=letterCombinations(digits);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    return 0;
}