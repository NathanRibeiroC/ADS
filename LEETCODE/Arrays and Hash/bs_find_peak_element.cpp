//
// Created by nribe on 31/12/2022.
//
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r-l)/ 2;
            if (nums[mid] > nums[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};

int main(){
    Solution s;

    vector<int> testArray = {1,2,3,1};

    cout << s.findPeakElement(testArray) << endl;
}