#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;

    ListNode(int x)
    {
        data=x;
        next=NULL;
    }
};

int len(ListNode *head)
{
    ListNode *curr=head;
    int c=0;
    while(curr!=NULL)
    {
        curr=curr->next;
        c++;
    }
    return c;
}
ListNode *reverseNode(ListNode *head,int k)
{
    if(head==NULL)
    return NULL;

    int l=len(head);

    if(k>l)
    return head;

    ListNode *prev=NULL,*curr=head,*forward=curr->next;
    int c=0;

    while(c<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        c++;
    }
    if(forward!=NULL)
    {
        head->next=reverseNode(forward,k);
    }
    return prev;
}
void printNode(ListNode *head)
{
    ListNode *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main()
{
    ListNode *root=new ListNode(1);
    root->next=new ListNode(2);
    root->next->next=new ListNode(3);
    root->next->next->next=new ListNode(4);
    root->next->next->next->next=new ListNode(5);
    int k=3;
    printNode(root);
    ListNode *head=reverseNode(root,k);
    printNode(head);
    return 0;
}

