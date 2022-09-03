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
   deque<char> s;
   string ss;
   cin >>ss;
   int n=sz(ss);
   forn(i,n)
   {
    if(ss[i]=='(' or ss[i]=='[' or ss[i]=='{')
    {
        s.push_back(ss[i]);
    }
    else
    {
        if(s.empty())
        {
            cout << "false"<<endl;
            break;
        }
        else
        {
            int x=*(s.end()-1);
            s.pop_back();
            if(x=='{')
            {
                if(ss[i]!='}')
                {
                    cout << "false";
                    break;
                }
            }
            if(x=='(')
            {
                if(ss[i]!=')')
                {
                    cout << "false";
                    break;
                }
            }
            if(x=='[')
            {
                if(ss[i]!=']')
                {
                    cout << "false";
                    break;
                }
            }
        }
    }
   }
   if(s.empty())
   {
    cout << "true"<<endl;
   }
}