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

Node *recRevkth(Node *head,int k)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
        Node *revhead=recRevkth(next,k);
        head->next=revhead;
    }
    return prev;
}
Node *recIterative(Node *head,int k)
{
    Node *curr=head,*prevFirst=NULL;
    bool isFirstPass=true;
    while(curr!=NULL)
    {
        Node *first=curr;
        Node *prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k)
        {
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isFirstPass)
        {
            head=prev;
            isFirstPass=false;
        }
        else
        {
            prevFirst->next=prev;
        }
        prevFirst=first;
    }
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
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head = insertEnd(head,50);
    head = insertEnd(head,60);
    head = insertEnd(head,70);
    head = insertEnd(head,80);
    head =recRevkth(head,3);
    printList(head);
    return 0;
}