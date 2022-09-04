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

#define N 10000;
class ArDQ{
    private:
        
    public:
        int f=100;
        int r=100;
        int n=0;
        int q[10000];
        int size(){
            return n;
        }
        void pushback(int a)
        {
            if(size()==10000)
            {
                cout << "full"<<endl;
            }
            else
            {
                q[r]=a;
                r=(r+1)%N;
                n++;
            }
        }
        void popback()
        {
            if(n==0)
            {
                cout << "empty"<<endl;
            }
            else
            {
                r=(r-1)%N;
                n--;
            }
        }
        void pushfront(int a)
        {
            if(size()==10000)
            {
                cout << "full"<<endl;
            }
            else
            {
                f=(f-1)%N;
                q[f]=a;
                n++;
            }
        }
        void popfront()
        {
            if(n==0)
            {
                cout << "empty"<<endl;
            }
            else
            {
                f=(f+1)%N;
                n--;
            }
        }

};
signed main()
{
   fast_cin();
   ArDQ q;
   q.pushback(100);
   q.pushfront(50);
   q.pushback(150);
   q.pushfront(300);
   q.popfront();
   for(int i=q.f;i<q.r;i++)
   {
        cout << q.q[i] << ' ';
   }
}