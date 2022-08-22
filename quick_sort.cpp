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
#define int long long
 

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */
 
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
int partition(int a[],int p,int r)
{
    int x=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return i+1;
}

void quickSort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}
signed main()
{
   fast_cin();
   int a[]={2,6,5,1,3,4};
   int n=sizeof(a)/sizeof(a[0]);
   quickSort(a,0,n-1);
   forn(i,n)
   {
    cout << a[i]<< ' ';
   }
}