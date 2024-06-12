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


Node *insertEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
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
        return head;
    }
}

Node *pairSwap(Node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
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

void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=NULL;
    head= insertEnd(head,1);
    head= insertEnd(head,2);
    head= insertEnd(head,3);
    head= insertEnd(head,4);
    printList(head);
    head=pairSwap(head);
    printList(head);
    return 0;
}