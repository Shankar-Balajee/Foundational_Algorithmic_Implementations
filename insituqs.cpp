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
void inplace_quick_sort(int s[],int a, int b)
{
    if(a>=b)
    {
        return;
    }
    int p=s[b];
    int left_pointer=a;
    int right_pointer=b-1;
    while(left_pointer<=right_pointer)
    {
        while(s[left_pointer]<=p and right_pointer>=left_pointer)
        {
            left_pointer++;
        }
        while(s[right_pointer]>=p and right_pointer>=left_pointer)
        {
            right_pointer--;
        }
        if(left_pointer<right_pointer)
        {
            swap(&s[left_pointer],&s[right_pointer]);
        }
    }
    swap(&s[left_pointer],&s[b]);
    inplace_quick_sort(s,a,left_pointer-1);
    inplace_quick_sort(s,left_pointer,b);
}
signed main()
{
   fast_cin();
   int a[]={3,4,5,2,1};
   inplace_quick_sort(a,0,4);
   forn(i,5)
   {
    cout << a[i] << ' ';
   }
   return 0;
}