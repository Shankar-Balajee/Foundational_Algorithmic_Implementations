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
   int t;
   cin >>t;
   while(t--)
   {
        int n;
        cin >>n;
        int a[n];
        map<int,int>m;
        rep(i,n)
        {
            cin >>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        int beg=2*a[0];
        int end=2*a[n-1];
        float maxpairs=-1000.00;
        for(int s=beg;s<=end;s++)
        {
            float pairs=0;
            for(auto x:m)
            {
                int req=s-x.first;
                if(req==x.first)
                {
                    if(x.second>=2)
                    {
                        pairs+=(x.second/(float)2);
                    }
                }else
                {
                    if(m.find(req)==m.end())
                    {
                        continue;
                    }
                    else
                    {
                        int c1=m[req];
                        int c2=x.second;
                        pairs+=(min(c1,c2)/(float)2);
                    }
                }
            }
            maxpairs=max(maxpairs,pairs);
        }
        cout << (int)(maxpairs)<<endl;
        
   }
}