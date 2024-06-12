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
    Node *temp=new Node(x);
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
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}


Node *insertSort(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL&&curr->next->data<x)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next= temp;
    return head;

}

int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    printList(head);
    head = insertSort(head,15);
    head = insertSort(head,40);
    printList(head);
    return 0;
}