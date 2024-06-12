#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right,*left;
    Node (int x)
    {
        data=x;
        left=right=NULL;
    }
};

void kthNode(Node *root,int k)
{
    if(root==NULL)
    return;
    if(k==0)
    cout<<root->data<<" ";
    else
    {
        kthNode(root->left,k-1);
        kthNode(root->right,k-1);
    }
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
    kthNode(root,2);
    return 0;
}