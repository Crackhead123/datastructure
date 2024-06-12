#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    int height;
};

Node *newNode(int x)
{
    Node *node=new Node();
    node->data=x;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node;
}
int height(Node *N)
{
    if(N==NULL)
    return 0;
    return N->height;
}

int max(int a,int b)
{
    return (a>b)?a:b;
}

Node *leftRotate(Node *x)
{
    Node *y=x->right;
    Node *T2=y->left;

    y->left=x;
    x->right=T2;

    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;

    return y;
}

Node *rightRotate(Node *y)
{
    Node *x=y->left;
    Node *T2=x->right;

    x->right=y;
    y->left=T2;

    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;

    return x;
}

int getBalance(Node *node)
{
    if(node==NULL)
    return 0;

    return height(node->left)-height(node->right);
}

Node *insert(Node *root,int x)
{
    if(root==NULL)
    return (newNode(x));

    if(x<root->data)
    {
        root->left=insert(root->left,x);
    }
    else if(x>root->data)
    {
        root->right=insert(root->right,x);
    }
    else
    return root;

    root->height=max(height(root->left),height(root->right))+1;
    int balance=getBalance(root);

    if(balance>1&&x<root->left->data)
    {
        return rightRotate(root);
    }
    if(balance<-1&&x>root->right->data)
    {
        return leftRotate(root);
    }
    if(balance>1&&x>root->left->data)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    if(balance<-1&&x<root->right->data)
    {
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

Node *minVal(Node *root)
{
    Node *curr=root;
    while(curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

Node *deleteNode(Node *root,int key)
{
    if(root==NULL)
    return root;
    if(key<root->data)
    {
        root->left=deleteNode(root->left,key);
    }
    if(key>root->data)
    {
        root->right=deleteNode(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            Node *temp=root->right;
            delete(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp=root->left;
            delete(root);
            return temp;
        }
        else
        {
            Node *temp=minVal(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    if(root==NULL)
    return root;

    root->height=1+max(height(root->left),height(root->right));

    int balance=getBalance(root);
    //left left case
    if(balance>1&&getBalance(root->left)>=0)
    return  rightRotate(root);
    if(balance>1 && getBalance(root->left)<0)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
}

void preOrder(Node *root)  
{  
    if(root != NULL)  
    {  
        cout << root->data << " ";  
        preOrder(root->left);  
        preOrder(root->right);  
    }  
}  


int main()  
{  
    Node *root = NULL;  
      
    /* Constructing tree given in  
    the above figure */
    root = insert(root, 10);  
    root = insert(root, 20);  
    root = insert(root, 30);  
    root = insert(root, 40);  
    root = insert(root, 50);  
    root = insert(root, 25);  
      
    /* The constructed AVL Tree would be  
                30  
            / \  
            20 40  
            / \ \  
        10 25 50  
    */
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";  
    preOrder(root);  
      
    return 0;  
}  