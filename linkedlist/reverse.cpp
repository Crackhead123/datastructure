#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node *insertBegin(Node *head,int x)
{
    Node *newNode=new Node(x);
    newNode->next=head;
    head=newNode;
    return head;
}

Node *insertEnd(Node *head,int x)
{
    Node *newNode=new Node(x);
    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
        newNode->next=NULL;
        return head;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=newNode;
    newNode->next=NULL;
    newNode->prev=curr;
    return head;
}

Node *reverse(Node *head)
{
    if(head==NULL||head->next==NULL)
    return head;
    Node *prev=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}

void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    Node *head=NULL;
    head=insertEnd(head,1);
    head=insertEnd(head,2);
    head=insertEnd(head,3);
    printList(head);
    cout<<endl;
    head=reverse(head);
    printList(head);
    return 0;
}