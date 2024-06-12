#include<bits/stdc++.h>
using namespace std;

struct triplet
{
    int val,aPos,vPos;
    triplet(int v,int ap,int vp)
    {
        val=v;
        aPos=ap;
        vPos=vp;
    }
};

struct MyCom
{
    bool operator()(triplet &t1,triplet &t2)
    {
        return t1.val>t2.val;
    }
};

vector<int>merge(vector<vector<int>>arr)
{
    vector<int>res;
    priority_queue<triplet,vector<triplet>,MyCom>pq;
    for(int i=0;i<arr.size();i++)
    {
        triplet t(arr[i][0],i,0);
        pq.push(t);
    }
    while(!pq.empty())
    {
        triplet p=pq.top();
        pq.pop();
        res.push_back(p.val);
        int ap=p.aPos;
        int vp=p.vPos;
        if(vp+1<arr[ap].size())
        {
            triplet t(arr[ap][vp+1],ap,vp+1);
            pq.push(t);
        }
    }
    return  res;
}
int main ()
{
    	vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
  
    vector<int> res=merge(arr);  
    cout << "Merged array is " << endl; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
}