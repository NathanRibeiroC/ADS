#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return {-1,-1};

        int l = 0, r = nums.size() - 1;
        vector<int> results;
        while (l <= r) {
            // Prevent (left + right) overflow
            int m = l+(r-l)/2;
            if (nums[m] == target) {
                results.push_back(m);
                r=m-1;
            }
            if (nums[m] > target) r = m-1;
            else l = m+1;
        }

        if(nums[l] == target || nums[r] == target){
            int results_size = results.size();
            if(results_size==0){
                return {0,0};
            }else{
                return {results[0],results[results_size-1]};
            }
        }
        return {-1,-1};
    }
};

int main() {
    Solution s;

    vector<int> nums {2,2,2};
    int target = 2;

    vector<int> result = s.searchRange(nums, target);
}