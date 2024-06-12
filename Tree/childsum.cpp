#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int data;
    Node *right,*left;
    Node(int x)
    {
        data=x;
        right=left=NULL;
    }
};

bool childSum(Node *root)
{
    if(root==NULL)
    return NULL;
    if(root->left==NULL&&root->right==NULL)
    return true;
    int sum=0;
    if(root->left)
    sum+=root->left->data;
    if(root->right)
    sum+=root->right->data;
    return (sum==root->data&&childSum(root->left)&&childSum(root->right));
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
    cout<<childSum(root);
    return 0;
}