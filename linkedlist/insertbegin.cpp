#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head=NULL;
void insertBegin(int x)
{
    Node *newNode=new Node();
    newNode->data=x;
    newNode->next=head;
    head=newNode;
}

void insertAnyPos(int x,int pos)
{
    Node *newNode = new Node();
    if(pos==1)
    {
        newNode->data=x;
        newNode->next=head;
        head=newNode;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2&&curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        return;
    }
    newNode->data=x;
    newNode->next=curr->next;
    curr->next=newNode;
}
void insertEnd(int x)
{
    Node *newNode = new Node();
    newNode->data=x;
    if(head==NULL)
    {
        head=newNode;
        newNode=NULL;
    }
    else
    {
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=newNode;
        newNode->next=NULL;
    }
}
void printList()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    insertEnd(10);
     insertEnd(20);
      insertEnd(30);
      insertBegin(40);
      insertAnyPos(50,2);
      printList();
	return 0;
}