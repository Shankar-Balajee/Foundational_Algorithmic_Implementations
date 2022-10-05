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
 
signed main()
{
   fast_cin();
   int n;
   cin >>n;
   int as[n];
   // adv binary search applies when we have a monotonous predicate fucntion
   // that is, if f(x) is true for some x, then it is true for all x greater than x
   // and if f(x) is false for some x, then it is false for all x less than x
    // for example, if we have a sorted array, and we want to find the first element greater than x
    // then we can use binary search to find the first element greater than x
    // if we want to find the first element greater than or equal to x, then we can use binary search to find the first element greater than x-1
    // if we want to find the first element less than x, then we can use binary search to find the first element less than x+1
    // if we want to find the first element less than or equal to x, then we can use binary search to find the first element less than x
    // the following code finds the first element greater than x
    // the following code finds the first element greater than or equal to x
    // the following code finds the first element less than x
    // the following code finds the first element less than or equal to x
    int l=0;
    int r=n;
    while(r-l>1)
    {
        int mid=(l+r)/2;
        if(mid*mid>n)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout << l <<endl;
}