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

// expected runtime of quickselect 
// good  call , L and G have size < 3 n/4 
// bad call ;atleast one of them have size >= 3n/4
// 7 2 9 4 3 7 6 1
// say 6 is the pivot, we have (2 4 3 1 ) and (7 9 7) good call
// the elements in the middle half lead to the good call
// P(good call pivot)=1/2 ..
// so what if there are duplicates ..... 
// a few facts from probability to prove this 
/* the expected # of tosses until a head for a fair coin is 2(geometric random variable) 
fact #2: expectation is a linear operator , i e , E(X+Y) = E(x)+E(y) 
E(cX)=cE(X)
*/
// Tavg(N)= expected runtime of quickselect
// Tavg(n)<= Tavg(3n/4)+ bn X(expected number of alls before a good call??) 
// where  is bn coming from? the partition . 3n/4 comes from the recursive call 
// <=Tvg(3n/4) + 2bn .. (now how exACTLY do we )
// by masters method it is O(n) .. however ..

signed main()
{
   fast_cin();
   int t;
   cin >>t;
   while(t--)
   {
        
   }
}
