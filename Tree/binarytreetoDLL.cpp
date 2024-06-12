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
Node *BTtoDLL(Node *root)
{
    if(root==NULL)
    return root;
    static Node *prev=NULL;
    Node *head=BTtoDLL(root->left);
    if(prev==NULL)
    head=root;
    else
    {
        root->left=prev ;
        prev->right=root;
    }
    prev=root;
    BTtoDLL(root->right);
    return head;
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->right;
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
    Node *head=BTtoDLL(root);
    printList(head);
    return 0;   
}