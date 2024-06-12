#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
};

Node *insertEnd(Node *head,int x)
{
    Node *temp= new Node(x);
    if(head==NULL)
    {
        temp->next=NULL;
        return temp;
    }
    else
    {
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=NULL;
        return head;
    }
}

void printList(Node *head)
{
    Node *curr=head;
    while(curr !=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void nthNodeFromLast(Node *head,int n)
{
    if(head==NULL)
    {
        return;
    }
    Node *first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        return;
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<(second->data);
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    nthNodeFromLast(head,2);
    return 0;
}