//
// Created by nribe on 07/01/2023.
//
#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(N)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        if(nums.size()==0){
            return false;
        }

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++)
            if(it->second>1)return true;

        return false;
    }
};

int main(){
    Solution so;

    vector<int> s = {1,1,1,3,3,4,3,2,4,2};

    cout << so.containsDuplicate(s);
}
