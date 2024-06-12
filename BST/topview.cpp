#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    int hd;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

void topView(Node *root)
{
    if(root==NULL)
    return;
    queue<Node*>q;
    map<int,int>mp;
    int hd=0;
    root->hd=hd;
    q.push(root);
    while(!q.empty())
    {
        Node *curr=q.front();
        q.pop();
        hd=curr->hd;
        if(mp.count(hd)==0)
        {
            mp[hd]=curr->data;
        }
        if(curr->left!=NULL)
        {
            curr->left->hd=hd-1;
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            curr->right->hd=hd+1;
            q.push(curr->right);
        }
    }

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        cout<<i->second<<" ";
    }
}

int main()
{
    Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    topView(root);
    return 0;
}