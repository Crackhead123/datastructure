#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *left,*right;
    int hd;
    Node (int x)
    {
        data=x;
        left=right=NULL;
    }
};


void bottomView(Node *root)
{
    if(root==NULL)
    return;

    map<int,int>m;
    queue<Node *>q;

    int hd=0;
    root->hd=hd;
    q.push(root);
    while(!q.empty())
    {
        Node *curr=q.front();
        q.pop();
        hd=curr->hd;
        m[hd]=curr->data;
        if(curr->left)
        {
            curr->left->hd=hd-1;
            q.push(curr->left);

        }
        if(curr->right)
        {
            curr->right->hd=hd+1;
            q.push(curr->right);
        }
    }

    for(auto i=m.begin();i!=m.end();i++)
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
    
    bottomView(root);
          
    return 0;  
}