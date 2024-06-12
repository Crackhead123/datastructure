#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node (int x)
    {
        data=x;
        next=NULL; 
        prev = NULL ; 
    }
};

Node *insertBegin(Node *head,int data)
{
    Node *temp=new Node(data);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        temp->prev=head;
        head->next->prev=temp;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}

void printList(Node *head)
{
    Node *curr=head;
    do
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }while(curr!=head);
    cout<<endl;
}

int main()
{
    Node *head=NULL;
    head=insertBegin(head,10);
    head=insertBegin(head,20);
    head=insertBegin(head,30);
    printList(head);
    return 0;
}