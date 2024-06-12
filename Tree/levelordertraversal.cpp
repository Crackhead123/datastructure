#include<bits/stdc++.h>
using namespace std;

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

void levelTraversal(Node *root)
{
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
        }
        cout<<endl;
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
    levelTraversal(root);
    return 0;
}