#include <bits/stdc++.h>
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
 
 

/* CODE BEGINS HERE */
 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        vector<vector<int>> V;
        for(int i1=0;i1<n-2;i1++)
        {
            if(i1>0 and n>1 and nums[i1]==nums[i1-1])
            {
                continue;
            }
            else
            {
                 int i2=i1+1;
                int i3=n-1;
                while(i3>i2)
                {
                    if(nums[i1]+nums[i2]+nums[i3]==0)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i1]);
                        temp.push_back(nums[i2]);
                        temp.push_back(nums[i3]);
                        V.push_back(temp);
                        i3--;
                    }
                    else if(nums[i1]+nums[i2]+nums[i3]<0)
                    {
                        i2++;
                    }
                    else
                    {
                        i3--;
                    }
                }
            }
            
                }
           return V;
    }
};