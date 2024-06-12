#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head=NULL;


void deleteBegin()
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        Node *temp=head->next;
        delete head;
        head=temp;
    }
}
void deleteEnd()
{
    if(head==NULL)
    return;
    if(head->next==NULL)
    {
        delete head;
        return;
    }
    Node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
}

void insertBegin(int x)
{
    Node *newNode=new Node();
    newNode->data=x;
    newNode->next=head;
    head=newNode;
}
void insertEnd(int x)
{
    Node *newNode=new Node();
    newNode->data=x;
    if(head==NULL)
    {
        newNode->next=head;
        head=newNode;
    }
    Node *curr=head;

    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=newNode;
    newNode->next=NULL;
}

void printList()
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
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    insertEnd(70);
    deleteBegin();
    deleteEnd();
    printList();
    return 0;
}