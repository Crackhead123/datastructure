#include<bits/stdc++.h>
using namespace std;
struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
Node *floorBST(Node *root,int key)
{
    Node *curr=root;
    Node *result=NULL;
    while(curr!=NULL)
    {
        if(curr->key<=key)
        {
            result=curr;
        }
        curr= (curr->key < key)? curr->right : curr->left;
    }
    return result;
}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(30);
    Node *result=floorBST(root,3);
    if(result==NULL);
    {
        cout<<"Key Not Present";
    }
    cout<<"Floor of the BST is "<<result->key<<endl;
    return 0;
}