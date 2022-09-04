// Author : Shankar Balajee Sambasivam
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>
#include <cstring>
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
 
signed main()
{
   fast_cin();
   int n;
   cin >>n;
   int k;
   cin >>k;
   vector<string> v;
   for(int i=0;i<n;i++)
   {
    string s;
    cin >>s;
    v.pb(s);
   }
   for(int i=k;i>=1;i--)
   {
        vector<string> buckets[27];
        
        for(int j=0;j<n;j++)
        {
            string current_string=v[j];
            
            if(current_string.size()>=i)
            {
                buckets[v[j][i-1]-'a'].push_back(current_string);
            }
            else
            {
                buckets[26].pb(current_string);
            }
        }
        v.clear();
        for(auto y:buckets[26])
        {
            v.pb(y);
        }
        for(int bruh=0;bruh<26;bruh++)
        {
            for(auto hehe:buckets[bruh])
            {
                v.pb(hehe);
            }
        }
   }
   for(auto words:v)
   {
    cout << words << endl;
   }
}