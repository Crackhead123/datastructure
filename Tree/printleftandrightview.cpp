#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right,*left;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

void printLeftView(Node *root)
{
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int count = q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
            q.pop();
            if(i==0)
            cout<<curr->data<<" ";
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
        }
    }
}

void printRightView(Node *root)
{
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int count = q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
            q.pop();
            if(i==count-1)
            cout<<curr->data<<" ";
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
        }
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
    printLeftView(root);
    cout<<endl;
    printRightView(root);
    return 0;
}