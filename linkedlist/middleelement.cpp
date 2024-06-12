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

void middleElement(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->data);
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    middleElement(head);
    return 0;
}