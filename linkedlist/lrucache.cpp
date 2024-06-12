#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int key;
    int value;
    Node *prev;
    Node *next;
    Node(int k,int v)
    {
        key=k;
        value=v;
        prev=next=NULL;
    }
};

class LRUCache
{
    public:
    unordered_map<int,Node*>map;
    int capacity,count;
    Node *head,*tail;

    LRUCache(int c)
    {
        capacity=c;
        head=new Node(0,0);
        tail=new Node(0,0);
        head->next=tail;
        tail->prev=head;
        head->prev=NULL;
        tail->next=NULL;
        count=0;
    }
    void deleteNode(Node *node)
    {
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void addToHead(Node *node)
    {
        node->next=head->next;
        node->next->prev=node;
        node->prev=head;
        head->next=node;
    }

    int get(int key)
    {
        if(map[key]!=NULL)
        {
            Node *node=map[key];
            int result=node->value;
            deleteNode(node);
            addToHead(node);
            cout<<"Got the value: "<< result<< " for the key: "<< key<<endl;
            return result;
        }
        cout<<"Did not get any value"<<" for the key: "<< key<<endl;
        return -1;
    }
    void set(int key,int value)
    {
        cout<<"Going to set the (key,"<<"value):("<<key<<","<<value<<")"<<endl;
        if(map[key]!=NULL)
        {
            Node *node=map[key];
            node->value=value;
            deleteNode(node);
            addToHead(node);
        }
        else
        {
            Node *node=new Node(key,value);
            map[key]=node;
            if(count<capacity)
            {
                count++;
                addToHead(node);
            }
            else
            {
                map.erase(tail->prev->key);
                deleteNode(tail->prev);
                addToHead(node);
            }
        }
    }
};

int main()
{
    LRUCache cache(2);
    cache.set(1,10);
    cache.set(2,20);
}