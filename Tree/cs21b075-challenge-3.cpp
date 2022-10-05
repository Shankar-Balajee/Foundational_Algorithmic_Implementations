// Author : Shankar Balajee Sambasivam

#include <bits/stdc++.h>  

 
using namespace std;
 
/* ************************************************************************************************************************************ */


/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

struct node{
    char c;
    struct node* left;
    struct node*right;
};

void print(struct node* head,struct node* cursor)
{
    head=cursor;
    string s1="";
    string s2="";
    if(head==NULL)
    {
        cout << s1 <<endl;
        cout << "C"<<endl;
        return;
    }
    while(head->left!=NULL)
    {
        head=head->left;
    }
    while(head!=NULL)
    {
        s1+=head->c;
        if(head==cursor)
        {
            s2+="C";
        }else{
            s2+=" ";
        }
        head=head->right;
    }
    cout <<s1<<endl;
    cout<<s2<<endl;
}
signed main()
{
   
   int n;
   cin >>n;
   struct node* cursor=NULL;
   struct node* head=NULL;
   cout << ""<<endl;
   cout << "C"<<endl;
   while(n--)
   {
        int t;
        cin >>t;
        if(t==1)
        {
            if(cursor==NULL)
            {
                cout << ""<<endl;
                cout <<"C"<<endl;
                
            }
            else if(cursor->left==NULL)
            {
                struct node* head;
                print(head,cursor);
            }
            else{
                cursor=cursor->left;
                struct node* head;
                print(head,cursor);
            }
        }
        else if(t==2)
        {
            if(cursor==NULL)
            {
                cout<<""<<endl;
                cout <<"C"<<endl;
            }
            else if(cursor->right==NULL)
            {
                struct node* head;
                print(head,cursor);
            }
            else
            {
                cursor=cursor->right;
                struct node* head;
                print(head,cursor);
            }
        }
        else if(t==3)
        {
            if(cursor==NULL)
            {
                struct node* head;
                print(head,cursor);
                continue;
            }
            struct node* p1=cursor->left;
            struct node*p2=cursor->right;
            if(p1==NULL and p2!=NULL)
            {
                struct node* we=cursor;
                free(we);
                cursor=cursor->right;
                cursor->left=NULL;
                struct node* head;
                print(head,cursor);
            }
            else if(p1!=NULL and p2==NULL)
            {
                struct node* we=cursor;
                cursor=cursor->left;
                cursor->right=NULL;
                free(we);
                struct node* head;
                print(head,cursor);
            }
            else if(p1==NULL and p2==NULL)
            {
                struct node* we=cursor;
                free(we);
                cursor=NULL;
                struct node* temp;
                print(temp,cursor);
            }
            else
            {
                struct node* we=cursor;
                p1->right=p2;
                cursor=cursor->right;
                cursor->left=p1;
                free(we);
                struct node* head;
                print(head,cursor);
            }
        }
        else{
            struct node* insert;
            insert=(struct node*)(malloc(sizeof(node)));
            cin >>insert->c;
            if(cursor==NULL)
            {
                cursor=insert;
                insert->left=NULL;
                insert->right=NULL;
            }
            else if(cursor!=NULL and cursor->right==NULL)
            {
                insert->right=NULL;
                insert->left=cursor;
                cursor->right=insert;
                cursor=cursor->right;
            }
            else
            {
                struct node* p2=cursor->right;
                insert->right=p2;
                p2->left=insert;
                cursor->right=insert;
                insert->left=cursor;
                cursor=cursor->right;
            }
            struct node* temp;
            print(temp,cursor);
        }
   }
}