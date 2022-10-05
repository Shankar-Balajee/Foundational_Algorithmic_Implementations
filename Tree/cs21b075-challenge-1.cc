#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node* right;
    node* parent;
};

struct node* find(struct node* node,int x)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->data==x)
    {
        return node;
    }
    if(find(node->left,x)==NULL)
    {
        return find(node->right,x);
    }
    else
    {
        return find(node->left,x);
    }
}

class Tree{
    public:
    node* root=NULL;
    node* last=NULL;
    void insert(int x);
    void preorder(node* root);
    void deleteNode(int x);
};


void Tree::deleteNode(int x)
{
    node* temp=find(root,x);
    // delete the node with the value x and update the last node
    // replace the number with the last node of the tree and delete the last node
    // if the last node is the node to be deleted, then just delete the last node
    // if the last node is the root, then just delete the root
    // if the last node is the left child of its parent, then update the parent's left child to NULL
    // if the last node is the right child of its parent, then update the parent's right child to NULL
    // if the last node is the root, then update the root to NULL
    //update the value of the last node to the previously inserted node in the tree
    // if the last node is the root, then update the root to NULL
 
    if(temp==NULL)
    {
        cout << "NODE NOT FOUND" << endl;
        return;
    }
    if(last==NULL)
    {
        cout << "TREE IS EMPTY"<<endl;
        return;
    }
    temp->data=last->data;
    if(last==root)
    {
        root=NULL;
        last=NULL;
        cout << "DELETED"<<endl;
        return;
    }
    if(((last->parent)->left)!=NULL and last->parent->right==last)
    {
        struct node* tt=last;
        if(tt->parent->left==tt)
        {
            tt->parent->left=NULL;
        }
        else
        {
            tt->parent->right=NULL;
        }
        last=last->parent->left;
        free(tt);
        cout << "DELETED"<<endl;
        return;
    }
    struct node* tt=last;
    if(tt->parent->left==tt)
    {
        tt->parent->left=NULL;
    }
    else
    {
        tt->parent->right=NULL;
    }
    free(tt);
    last=last->parent;

    struct node* lol=last;
    while(lol!=root and lol->parent->right!=lol)
    {
        lol=lol->parent;
    }
    if(lol==root)
    {
        while(lol->right!=NULL)
        {
            lol=lol->right;
        }
        last=lol;
        cout<< "DELETED"<<endl;
        return;
    }
    if(lol!=root)
    {
        lol=lol->parent;
        lol=lol->left;
        while(lol->right!=NULL)
        {
            lol=lol->right;
        }
        last=lol;
        cout << "DELETED"<<endl;
        return;
    }
}

void Tree::insert(int x)
{
    node* temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    if(find(root,x)!=NULL)
    {
        cout << "NOT INSERTED" << endl;
        return;
    }
    if(root==NULL)
    {
        root=temp;
        temp->parent=NULL;
        last=temp;
        cout << "INSERTED" << endl;
        return;
    }
    node* curr=last;
    if(last==root)
    {
        last->left=temp;
        temp->parent=last;
        last=temp;
        cout << "INSERTED" << endl;
        return;
    }
    while(curr->parent!=NULL and curr->parent->right==curr )
    {
        curr=curr->parent;
    }
    if(curr==root)
    {
        while(curr->left!=NULL)
        {
            curr=curr->left;
        }
        curr->left=temp;
        temp->parent=curr;
        last=temp;
        cout << "INSERTED" << endl;
        return;
    }
    if(last->parent->left==last and last->parent->right==NULL)
    {
        last->parent->right=temp;
        temp->parent=last->parent;
        last=temp;
        cout << "INSERTED" << endl;
        return;
    }
    struct node* n=last;
    while(n->parent->right==n and n!=root)
    {
        n=n->parent;
    }
    if(n!=root)
    {
        n=n->parent;
        
        if(n->right!=NULL)
        {
            n=n->right;
            while(n->left!=NULL)
            {
                n=n->left;
            }
            n->left=temp;
            temp->parent=n;
            last=temp;
            cout << "INSERTED" << endl;
            return;
        }
        else
        {
            n->right=temp;
            temp->parent=n;
            last=temp;
            cout << "INSERTED" << endl;
            return;
        }
        
    }
}

void Tree::preorder(node* n)
{
    
    if(root==NULL)
    {
        cout << "TREE IS EMPTY" ;
        return;
    }
    if(n==NULL)
    {
        return;
    }
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
}

int main()
{
    int n;
    cin>>n;
    node* root = NULL;
    node* prev=root;
    Tree tree;

    for(int t=1;t<=n;t++)
    {
        char c;
        cin >>c;
        if(c=='i')
        {
            //we need to insert a new node
            int val;
            cin >>val;
            tree.insert(val);
        }
        else if(c=='d')
        {
            //we need to delete a node
            int val;
            cin >>val;
            tree.deleteNode(val);
        }
        else if(c=='p')
        {
            //we need to print the preorder traversal
            tree.preorder(tree.root);
            cout <<endl;
        }
    }
}