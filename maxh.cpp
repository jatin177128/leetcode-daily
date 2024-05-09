#include <bits/stdc++.h>
class Solution {
public:
    int index = 0;
    int max(vector<int>& happiness){
        int n = INT_MIN;
        for(int i = 0 ; i < happiness.size();i++){
            if(happiness[i]>=n){
                n= happiness[i];
                index = i;
            }
            if(happiness[i]>0){happiness[i]--;}
        }
        return n ;
    }
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long happy = 0;
        sort(happiness.begin(),happiness.end());
            for(int i = 0;i<happiness.size();i++){
            if(k!=0){
            happy+= max(happiness);
            happiness[index]= 0;
            k--;
            }

        }
        return happy;
    }
};