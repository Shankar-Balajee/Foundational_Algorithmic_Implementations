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
 

/* CODE BEGINS HERE */
 
int32_t main()
{
   fast_cin();
   // JUST CREATING A NORMAL SUFFIX ARRAY WITH SORTED STRING SUFFIXES

   string s = "banana";
    int n = s.length();
    map<string, int> Map;
    int suffix[n];
 
    // Mapping string with its index of
    // it's last letter.
    string sub = "";
    for (int i = n - 1; i >= 0; i--) {
        sub = s[i] + sub;
        Map[sub] = i;
    }
 
    // Storing all values of map
    // in suffix array.
    int j = 0;
    for (auto x : Map) {
        suffix[j] = x.second;
        j++;
    }
 
    // printing suffix array.
    cout << "Suffix array for banana is" << endl;
    for (int i = 0; i < n; i++) {
        cout << suffix[i] << " ";
    }
    cout << endl;

    // now that we have created the suffix array for the given string .. our objective is to find the least common prefix among all of the suffixes
    // how exctly do we do that
    // we do that by performing the following operations
    // we create an LCP array where lcp[i]=LCP(p[i],p[i+1])
    // now LCP[i.j]=min(lcp[i]lcp[i+1]...lcp[j-1])
    //now how do we build the lcp array which is actuallly the foundation behind all that is happening here
    // now the answer to all the problems in hte universe lies in the following lines, nope it doesn't .
}