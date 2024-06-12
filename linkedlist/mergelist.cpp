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
    Node *newNode=new Node(x);
    if(head==NULL)
    {
        return newNode;
    }
    else
    {
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=newNode;
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

Node *merge(Node *a,Node *b)
{
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    Node *head=NULL,*tail=NULL;
    if(a->data <= b->data)
    {
        head=tail=a;
        a=a->next;
    }
    else
    {
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL&&b!=NULL)
    {
        if(a->data<=b->data)
        {
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else
        {
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)
    tail->next=b;
    else
    tail->next=a;
    return head;
}

int main()
{
    Node *head1=NULL,*head2=NULL;
    head1=insertEnd(head1,5);
    head1=insertEnd(head1,10);
    head1=insertEnd(head1,15);
    head2=insertEnd(head2,2);
    head2=insertEnd(head2,3);
    head2=insertEnd(head2,20);
    printList(head1);
    printList(head2);
    Node *temp=merge(head1,head2);
    printList(temp);
    return 0;
}