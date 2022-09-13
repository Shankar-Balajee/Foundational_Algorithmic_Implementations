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
   int n,m;
   cin>>n>>m;
   int a[n][m];
   rep(i,n)
   {
    rep(j,m)
    {
        cin >>a[i][j];
    }
   }
   int b[n][m];
   int c[n][m];
   rforsn(i,n-2,1)
   {
        rforsn(j,m-2,1)
        {
            if(a[i][j]==0)
            {
                int v1=a[i][j+1]-1;
                int v2=a[i+1][j]-1;
                if(v2<v1+1 and v1<v2+1)
                {
                    a[i][j]=max(v1,v2);
                }
                else if(v2<v1+1 and v1>=v2+1)
                {
                    a[i][j]=v2;
                }
                else if(v1<v2+1 and v2>=v1+1)
                {
                    a[i][j]=v1;
                }
                else
                {
                    a[i][j]=min(v1,v2);
                }
            }
        }
   }
   
   bool p=1;
   forn(i,n)
   {
    
        forn(j,m-1)
        {
            if(a[i][j]<a[i][j+1])
            {
                continue;
            }
            else
            {
                p=0;
            }
        }
   }
   forn(j,m)
   {
        forn(i,n-1)
        {
            if(a[i][j]>=a[i+1][j])
            {
                p=0;
            }
        }
   }
   if(p)
   {
        int sum=0;
        forn(i,n)
        {
            forn(j,m)
            {
                sum+=a[i][j];
                //cout << a[i][j]<<' ';
            }
            //cout << endl;
        }
        //cout << endl;
        cout << sum << endl;
   }
   else
   {
    cout << -1 << endl;
   }
}