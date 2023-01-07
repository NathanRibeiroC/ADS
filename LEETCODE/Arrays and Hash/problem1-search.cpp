#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i =0;i<n;i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;

    vector<int> nums {-1,0,3,5,9,12};
    int target = 10;

    cout << "Found at: " << s.search(nums, target) << endl;
}


