#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;

bool areSame(int CP[],int CT[])
{
    for(int i=0;i<CHAR;i++)
    {
        if(CT[i]!=CP[i])
        {
            return false;
        }
    }
    return true;
}
bool anagramSearch(string &txt,string &pat)
{
    int CT[CHAR]={0},CP[CHAR]={0};
    for(int i=0;i<pat.length();i++)
    {
        CP[pat[i]]++;
        CT[txt[i]]++;
    }
    for(int i=pat.length();i<txt.length();i++)
    {
        if(areSame(CP,CT))
        {
            return true;
        }
        CT[txt[i]]++;
        CT[txt[i-pat.length()]]--;
    }
    return false;
}

int main()
{
   string txt = "geeksforgeeks"; 
    string pat = "frog"; 
    if (anagramSearch(txt,pat)) 
        cout << "Anagram search found"; 
    else
        cout << "Anagram search not found"; 
  
    return 0; 
}