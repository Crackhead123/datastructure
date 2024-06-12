#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data =x; 
        next=NULL;
    }
};

Node *insertBegin(Node *head,int data)
{
    Node *newNode = new Node(data);
    if(head==NULL)
    {
        newNode->next=newNode;
        return newNode;
    }
    else
    {
        newNode->next=head->next;
        head->next=newNode;
        int t=head->data;
        head->data=newNode->data;
        newNode->data=t;
        return head;
    }
}
Node *insertEnd(Node *head,int data)
{
    Node *temp = new Node(data);
    if(head == NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}

Node *deleteBegin(Node *head)
{
    if(head == NULL || head->next == head)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        Node *temp=head->next;
        curr->next=temp;
        delete head;
        return temp;
    }
}
Node *deleteEnd(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}
Node *deleteKthNode(Node *head,int k)
{
    if(k==1)
    {
        head->data=head->next->data;
        Node *temp=head->next;
        head->next=head->next->next;
        delete head;
        return temp;
    }
    else
    {
        Node *curr=head;
        for(int i=0;i<k-2;i++)
        {
            curr=curr->next;
        }
        Node *temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        return head;
    }
}
void printList(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<(head->data)<<" ";
    for(Node *p=head->next;p!=head;p=p->next)
    {
        cout<<p->data<<" ";
    }
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
    head = deleteKthNode(head,4);
    printList(head);
    return 0;
}