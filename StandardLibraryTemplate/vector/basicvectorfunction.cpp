#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    int a[]={10,20,5,23,42,15};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> vect(a,a+n);

    cout<<"Printing the element of the vector:";
    for (auto i:vect)
    {
        cout<<i<<" ";
    }
    //sorting the vector
    sort(vect.begin(),vect.end());
    cout<<endl;
    cout<<"Printing the vector after sorting:";
    for(auto i:vect)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(vect.begin(),vect.end());
    cout<<"Printing the vector after sorting:";
    for(auto i:vect)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"The largest element of the vector is:"<<*max_element(vect.begin(),vect.end());
    cout<<endl;
    cout<<"The largest element of the vector is:"<<*min_element(vect.begin(),vect.end());
    cout<<endl;
    sort(vect.begin(),vect.end());
    binary_search(vect.begin(),vect.end(),0)?cout<<"True":cout<<"False";
}
