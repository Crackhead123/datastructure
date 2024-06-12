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

int balance(Node *root)
{
    if(root==NULL)
    return 0;
    int lh=balance(root->left);
    if(lh==-1)
    return -1;
    int rh=balance(root->right);
    if(rh==-1)
    return -1;
    if(abs(rh-lh)>1)
    return -1;
    else
    return max(lh,rh)+1;
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
    cout<<balance(root);
    return 0;
}