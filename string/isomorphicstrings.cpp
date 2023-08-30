#include<bits/stdc++.h>
using namespace std;

#define MAX_CHARS 256


bool areIsomorphic(string s1,string s2)
{
    int m=s1.length(),n=s2.length();

    if(m!=n)
    return false;

    bool marked[MAX_CHARS]={ false };

    int map[MAX_CHARS];
    memset(map,-1,sizeof(map));


    for(int i=0;i<n;i++)
    {
        if(map[s1[i]]==-1)
        {
            if(marked[s2[i]]==true)
            return false;
            
            marked[s2[i]]=true;

            map[s1[i]]=s2[i];
        }
        else if(map[s1[i]]!=s2[i])
        return false;
    }


    return true;

}


int main()
{
    cout << (areIsomorphic("aab", "xxy") ? "True" : "False")
         << endl;
    return 0;
}