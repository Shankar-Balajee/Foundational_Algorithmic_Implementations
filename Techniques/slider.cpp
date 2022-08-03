#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin >>n>>k;
    int a[n];
    int init=0;
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        init+=a[i];
    }
    int ans=0;
    int s=0;
    int e=k-1;
    if(k>=n)
    {
       cout << init << endl; 
    }
    else
    {
        int sum=0;
        for(int i=s;i<=e;i++)
        {
            sum+=a[i];
        }
        while(e<=n-1)
        {
            ans=max(ans,sum);
            sum-=a[s];
            s++;
            e++;
            sum+=a[e];
        }
        cout << ans << endl;
    }
}
