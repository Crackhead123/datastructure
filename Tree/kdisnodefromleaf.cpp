#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *left,*right;
    Node (int x)
    {
        data=x;
        left=right=NULL;
    }
};

void kthdisfromleaf(Node *root,int k,int &count,int path,bool visited[])
{
    if(root==NULL)
    return;
    visited[path]=false;
    path++;
    if(root->left==NULL&&root->right==NULL&&path-k-1>=0&&visited[path-k-1]==false)
    {
        count++;
        visited[path-k-1]=true;
        return;
    }
    kthdisfromleaf(root->left,k,count,path,visited);
    kthdisfromleaf(root->right,k,count,path,visited);
}

int countNode(Node *root,int leaf)
{
    int count=0;
    bool visited[100000]={false};
    kthdisfromleaf(root,leaf,count,0,visited);
    return count;
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->left->left->left=new Node(60);
	root->left->left->left->left=new Node(70);
    int k=2;
    cout<<countNode(root,k);
    return 0;
}