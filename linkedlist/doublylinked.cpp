#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data=d;
        next=prev=NULL;
    }
};

Node *insertBegin(Node *head,int data)
{
    Node *newNode = new Node(data);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    return newNode;
}
Node *insertEnd(Node *head,int data)
{
    Node *newNode=new Node(data);
    if(head==NULL)
    {
        newNode->next=head;
        return newNode;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=newNode;
    newNode->prev=curr;
    return head;
}
Node *deleteLast(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *last=head;
    while(last->next->next!=NULL)
    {
        last=last->next;
    }
    delete last->next;
    last->next=NULL;
    return head;
}
Node *deleteBegin(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
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
   

    head=insertEnd(head,40);
    head=insertEnd(head,50);
    head=insertEnd(head,60);
    printList(head);
    head=deleteLast(head);
    head=deleteLast(head);
    head=deleteLast(head);
    cout<<endl;
    printList(head);
    return 0;
}