#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    unsigned freq;
    Node *left,*right;
    Node(char x,unsigned f)
    {
        data=x;
        freq=f;
        left=right=NULL;
    }
};

struct compare
{
    bool operator()(Node *a,Node *b)
    {
        return a->freq>b->freq;
    }
};


void printCode(Node *root,string str)
{
    if(!root)
    return;
    if(root->data!='$')
    {
        cout<<root->data<<" "<<str<<endl;
    }
    printCode(root->left,str+"0");
    printCode(root->right,str+"1");
}

void hoffman(char arr[],int freq[],int n)
{
    priority_queue<Node*,vector<Node*>,compare>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(new Node(arr[i],freq[i]));
    }
    while (pq.size()>1)
    {
        Node *l=pq.top();
        pq.pop();
        Node *r=pq.top();
        pq.pop();
        Node *temp=new Node('$',l->freq+r->freq);
        temp->left=l;
        temp->right=r;
        pq.push(temp);
    }
    printCode(pq.top(),"");
}

int main()
{
    char arr[] = { 'a', 'd', 'e', 'f' };
	int freq[] = { 30, 40, 80, 60 };

	int size = sizeof(arr) / sizeof(arr[0]);

	hoffman(arr, freq, size);

	return 0;
}