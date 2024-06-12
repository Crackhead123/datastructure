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
    cout<<endl;
}

Node *reverseList(Node *head)
{
    Node *prev=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node *recRevL(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=recRevL(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}
Node *recRevL1(Node *curr,Node *prev)
{
    if(curr==NULL)
    return prev;
    Node *temp=curr->next;
    curr->next=prev;
    recRevL1(temp,curr);
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    printList(head);
    head = reverseList(head);
    printList(head);
    head = recRevL(head);
    printList(head);
    head = recRevL1(head, NULL);
    printList(head);
    return 0;
}