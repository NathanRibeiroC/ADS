#include <bits/stdc++.h>
using namespace std;

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        for(int i=0;i<(nums.size()-1);i++){
//            for(int j=(i+1);j<nums.size();j++){
//                if((nums[i]+nums[j])==target){
//                    return {i,j};
//                }
//            }
//        }
//        return {};
//    }
//};

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> x;
        vector<int> ans;
        int z;
        for (int i = 0; i < nums.size(); ++i) {
            int z = target - nums[i];
            if (x.find(z) != x.end()) {
                ans.push_back(i);
                ans.push_back(x[z]);
            } else {
                x[nums[i]] = i;
            }
        }
        return ans;
    }
};

int main(){
    Solution so;

    vector<int> arr {2,7,11,15};
    int t = 9;

    vector<int> result = so.twoSum(arr,t);
}