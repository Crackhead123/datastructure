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
        temp->next=NULL;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=NULL;
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
void *removeDup(Node *head)
{
    Node *curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
        {
            curr=curr->next;
        }
    }
}
int main()
{
    Node *head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);
    removeDup(head);
    printList(head);
    return 0;
}