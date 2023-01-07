//
// Created by nribe on 24/12/2022.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        if(nums.size() == 0)
            return -1;

        int l = 0, r = n-1;
        while (l <= r){
            int mid = l + (r - l)/2;
            if (target == nums[mid]){
                return mid;
            }

            // left sorted portion
            if (nums[l] <= nums[mid]){
                if(target > nums[mid] || target < nums[l]){
                    l = mid + 1; //search on right
                }else{
                    r = mid - 1; //search on left
                }
            }

            // right sorted portion
            else{
                if(target < nums[mid] || target > nums[r]){
                    r = mid - 1; //search on left
                }else{
                    l = mid + 1; //search on right
                }
            }
        }

        // End Condition: left > right
        return -1;
    }
};

int main() {
    Solution s;

    vector<int> nums {4,5,6,7,0,1,2};
    int target = 0;

    cout << fixed << setprecision(5) << s.search(nums, 0) << endl;
}