//
// Created by nribe on 07/01/2023.
//
#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY: O(NLOGN)
//SPACE COMPLEXITY: O(N)

class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b)
    {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        vector<pair<int, int>> aux;

        for (auto it : mp) {
            aux.push_back(it);
        }

        sort(aux.begin(), aux.end(), cmp);

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(aux[i].first);
        }

        return ans;
    }
};

int main(){
    Solution so;

    vector<int> s = {1};

    so.topKFrequent(s,1);
}