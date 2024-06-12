#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node *swapPairs(Node* head)
{
    if(head==NULL&&head->next==NULL)
    return head;

    Node *curr=head->next->next;
    Node *prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL&&curr->next!=NULL)
    {
        prev->next=curr->next;
        prev=curr;
        Node *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}

int main()
{
    Node *root=new Node(10);
    root->next=new Node(20);
    root->next->next=new Node(30);
    root->next->next->next=new Node(40);
    Node *curr=root;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
    Node *newHead=swapPairs(root);
    curr=newHead;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}