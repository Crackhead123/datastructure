#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
    Node (char x)
    {
        data=x;
        next=NULL;
    }
};


Node *insertEnd(Node *head,char x)
{
    Node *newNode=new Node(x);
    if(head==NULL)
    return newNode;
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

Node *reverseList(Node *a)
{
    Node *curr=a,*prev=NULL;
    while(curr->next!=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    curr->next=prev;
    return curr;
}
bool isPalindrame(Node *head)
{
    if(head==NULL)
    {
        return true;
    }
    Node *slow=head,*fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *rev=reverseList(slow->next);
    Node *temp=head;
    while(rev!=NULL)
    {
        if(temp->data!=rev->data)
        {
            return false;
        }
        rev=rev->next;
        temp=temp->next;
    }
    return true;
}

int main()
{
    Node *head=NULL;
    head=insertEnd(head,'1');
    head=insertEnd(head,'0');
    head=insertEnd(head,'0');
    head=insertEnd(head,'1');
    
    cout<<isPalindrame(head);
    return 0;
}