//
// Created by nribe on 31/12/2022.
//
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findMin(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l < r){
            int mid = l + (r-l)/2;
            if(nums[mid] > nums[r]) l = mid+1;
            else if(nums[mid] < nums[r]) r = mid;
            else return nums[r];
        }
        return nums[l];
    }
};

int main(){
    Solution s;

    vector<int> nums {4,5,6,7,0,1,2};

    cout << "Found at: " << s.findMin(nums) << endl;
}
