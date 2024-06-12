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

Node *segragate(Node *head)
{
    Node *es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        int x=curr->data;
        if(x%2==0)
        {
            if(es==NULL)
            {
                es=ee=curr;
            }
            else
            {
                ee->next=curr;
                ee=ee->next;
            }
        }
        else
        {
            if(os==NULL)
            {
                os=oe=curr;
            }
            else
            {
                oe->next=curr;
                oe=oe->next;
            }
        }
    }
    if(es==NULL||os==NULL)
    {
        return head;
    }
    ee->next=os;
    oe->next=NULL;
    return es;
}

void  printList(Node *head)
{
    Node *curr=head;
    while(curr !=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=new Node(17);
	head->next=new Node(15);
	head->next->next=new Node(8);
	head->next->next->next=new Node(12);
	head->next->next->next->next=new Node(10);
	head->next->next->next->next->next=new Node(5);
	head->next->next->next->next->next->next=new Node(4);
	printList(head);
	head=segragate(head);
	printList(head);
	return 0;
}