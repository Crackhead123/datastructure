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
void deleteNode(Node *temp)
{
    Node *next=temp->next;
    temp->data = next->data;
    temp->next=next->next;
    delete (next);
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
    Node *head= new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    Node *ptr=new Node(40);
    head->next->next->next=ptr;
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    deleteNode(ptr);
    printList(head);
    return 0;
}