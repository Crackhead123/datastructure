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

int burnTreeFromLeaf(Node *root,int leaf,int &dis,int &res)
{
    if(root==NULL)
    return 0;
    if(root->data == leaf)
    {
        dis=0;
        return 1;
    }

    int ldist=-1,rdist=-1;
    int lh=burnTreeFromLeaf(root->left,leaf,ldist,res);
    int rh=burnTreeFromLeaf(root->right,leaf,rdist,res);
    if(ldist!=-1)
    {
        dis=ldist+1;
        res=max(res,rh+dis);
    }
    if(rdist!=-1)
    {
        dis=rdist+1;
        res=max(res,lh+dis);
    }
    return 1+max(lh,rh);
}
int main ()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->left->left->left=new Node(60);
	root->left->left->left->left=new Node(70);
	int dis=-1;int leaf=50;int res=0;
	burnTreeFromLeaf(root,leaf,dis,res);
	cout<<res;
}