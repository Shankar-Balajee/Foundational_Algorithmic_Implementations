// Author : Shankar Balajee Sambasivam
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
/* ************************************************************************************************************************************ */
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define rep(i, n) for(ll i = 0, _n = (ll)(n); i < _n; i++)
#define int long long
 

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

struct node{
     int val;
     int p;
     struct node* next;
};
void solve(struct node* head,struct node* start)
{
     
}
signed main()
{
   int n;
   cin >>n;
   struct node* head;
   head=(struct node*)(malloc(sizeof(struct node)));
   int arc=0;
   int nc=0;
   struct node* start=NULL;
   while(n--)
   {
          int t;
          cin >>t;
          
          if(t==1)
          {
               if(arc==0)
               {
                    cin >>head->val;
                    cin >>head->p;
                    head->next=NULL;
                    arc++;
                    start=head;
               }
               else
               {
                    struct node* temp;
                    temp=(struct node*)(malloc(sizeof(struct node)));
                    cin >>temp->val;
                    cin >>temp->p;
                    temp->next=NULL;
                    head->next=temp;
                    head=head->next;
                    arc++;
                    head=start;
               }
               //we have reset to the starting point
               
          }
          else if(t==2)
          {
               // we just remove the last element right? or the first element , its the first we gotta update start as well
               if(start==NULL)
               {
                    cout << "No letter"<<endl;
                    arc=0;
                    nc++;
                    continue;
               }
               struct node* ptr=start;
               cout << start->val <<endl;
               start=start->next;
               head=start;
               free(ptr);
          }
          else
          {
               // highest priority shall be removed and how exactly? we shall traverse to find the maximum value of p
               if(start==NULL)
               {
                    cout << "No letter"<<endl;
                    arc=0;
                    nc++;
                    continue;
               }
               struct node* pt=start;
               struct node* maxptr=pt;
               int maxprior=pt->p;
               while(pt!=NULL)
               {
                    if(pt->p>maxprior)
                    {
                         maxptr=pt;
                         maxprior=pt->p;
                    }
                    pt=pt->next;
               }
               // reset to start again uff
               
               // now we gotta remove maxptr from the thing
               // if maxptr is the start
               cout << maxptr->val << ' ' << maxptr->p << endl;
               if(maxptr==start)
               {
                    start=start->next;
                    free(maxptr);
               }
               else
               {
                    struct node* temp=start;
                    while(temp->next!=maxptr)
                    {
                         temp=temp->next;
                    }
                    struct node* ptt=maxptr->next;
                    temp->next=ptt;
                    free(maxptr);
               }
               head=start;
          }
   }
}