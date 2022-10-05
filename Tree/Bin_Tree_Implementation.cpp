#include <bits/stdc++.h>
using namespace std; 


struct node{
    int data;
    struct node* left;
    struct node* right;
    
};
void Insert(struct node* node,int val)
{
    node=(malloc(struct node *))(sizeof(struct node));
    node->data=val;
    node->left=NULL;
    node->right=NULL;
}


int main()
{
    struct node* root;
    Insert(root,10);
    struct node* ll;
    root->left-ll;
    Insert(ll,20);
    
}
