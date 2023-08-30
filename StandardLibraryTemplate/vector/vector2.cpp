#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    /*
    vector<int> g1;
    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);
    }

    for(auto i:g1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<g1.size()<<'\n';
    cout<<g1.max_size()<<'\n';
    g1.resize(4);
    cout<<endl;
    for(auto i:g1)
    {
        cout<<i<<" ";
    }
    g1.empty()?cout<<"True":cout<<"False";
    cout<<endl;
    g1.shrink_to_fit();
    cout<<endl;
    for(auto i:g1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<g1.at(3);
    cout<<g1.back();
    cout<<g1.front();


    int *p=g1.data();
    cout<<*p;
    */

    vector<int>g2;

    g2.assign(5,10);
    for(auto i:g2)
    {
        cout<<i<<" ";
    }
    g2.pop_back();
    cout<<endl;
     for(auto i:g2)
    {
        cout<<i<<" ";
    }
    g2.insert(g2.end(),5);
    cout<<endl;
     for(auto i:g2)
    {
        cout<<i<<" ";
    }
    g2.erase(g2.begin());
    cout<<endl;
    for(int i=0;i<g2.size();i++)
    {
        cout<<g2[i]<<" ";
    }
}
