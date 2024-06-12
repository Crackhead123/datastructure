#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head=NULL;

int position(int key)
{
    Node *curr=head;
    int pos=1;
    while(curr!=NULL)
    {
        if(curr->data==key)
        {
            return pos;
        }
        else
        {
            curr=curr->next;
            pos++;
        }
    }
    return -1;
}

int recursionSearch(Node *head,int x)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==x)
    {
        return 1;
    }
    else
    {
        int res=recursionSearch(head->next,x);
        if(res==-1){
            return -1;
        }
        return res+1;
    }
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

int main()
{
    insertEnd(10);
     insertEnd(20);
      insertEnd(30);
      cout<<position(20)<<endl;
      cout<<recursionSearch(head,20);
      return 0;
}

