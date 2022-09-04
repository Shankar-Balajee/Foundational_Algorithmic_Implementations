#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int K;
    cin >>N;
    cin >> K;
    vector<string> v;
    for(int i=0;i<N;i++)
    {
        string s;
        cin >>s;
        v.push_back(s);
    }

    for(int i=K;i>=1;i--)
    {
        vector<string> buckets[27];
        for(int j=0;j<N;j++)
        {
            if(v[j].size()>=i)
            {
                buckets[v[j][i-1]-'a'].push_back(v[j]);
            }
            else
            {
                buckets[26].push_back(v[j]);
            }
        }
        v.clear();
        for(auto v1:buckets[26])
        {
            v.push_back(v1);
        }
        for(int lamda=0;lamda<26;lamda++)
        {
            for(auto vals:buckets[lamda])
            {
                v.push_back(vals);
            }
        }
    }

    for(auto elements:v)
    {
        cout << elements << ' ';
    }
    cout << endl;
}