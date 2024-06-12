#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *right,*left;
    Node (char x)
    {
        data=x;
        left=right=NULL;
    }
};
Node *buildTree(char in[],char pre[],unordered_map<char,int>m,int is,int ie,int &preIndex)
{
    if(is>ie)
    return NULL;
    char curr=pre[preIndex++];
    Node *root=new Node(curr);

    if(is==ie)
    return root;

    int inIndex=m[curr];

    root->left=buildTree(in,pre,m,is,inIndex-1,preIndex);
    root->right=buildTree(in,pre,m,inIndex+1,ie,preIndex);
    return root;
}
Node *makeHash(char in[],char pre[],int len)
{
    unordered_map<char,int>map;
    for(int i=0;i<len;i++)
    {
        map[in[i]]=i;
    }
    int inIndex=0;
    return buildTree(in,pre,map,0,len-1,inIndex);    
}
void printInorder(Node *root)
{
    if(root!=NULL)
    {
        printInorder(root->left);
        cout<<root->data<<" ";
        printInorder(root->right);
    }
}

int main()
{
    char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
	char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
	int len = sizeof(in) / sizeof(in[0]);

    Node *root=makeHash(in,pre,len);
    printInorder(root);
}
