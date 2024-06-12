#include<bits/stdc++.h>
using namespace std;

const int MAX_CHAR=26;
struct Key
{
    int freq;
    char ch;
    bool operator<(const Key &k) const 
    { 
        return freq < k.freq; 
    }
};

string rearrangeString(string str)
{
    int n=str.length();
    int count[MAX_CHAR]={0};
    for(int i=0;i<n;i++)
    {
        count[str[i]-'a']++;
    }
    priority_queue<Key> p;
    for(char c='a';c<='z';c++)
    {
        if(count[c-'a']==0)
        continue;
        else
        p.push(Key{count[c-'a'],c});
    }
    str=" ";
    Key prev={-1,'#'};
    while(!p.empty())
    {
        Key k=p.top();
        p.pop();
        str=str+k.ch;
        if(prev.freq>0)
        {
            p.push(prev);
        }
        (k.freq)--;
        prev=k;
    }
    return str;
}
int main()
{
    string str="geeksforgeeks";
    cout<<rearrangeString(str);
    return 0;
}