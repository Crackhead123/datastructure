#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *right,*left;
    Node (int x)
    {
        data=x;
        right=left=NULL;
    }
};

int getSize(Node *root)
{
    if(root==NULL)
    return 0;
    return 1+getSize(root->left)+getSize(root->right);
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
    cout<<getSize(root);
    return 0;
}