//
// Created by nribe on 24/12/2022.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& array, int target) {
        int n = array.size();

        if(array.size() == 0)
            return -1;

        int a = 0, b = n-1;
        while (a <= b) {
            // Prevent (left + right) overflow
            int k = a+(b-a)/2;
            if (array[k] == target) {
                return k;
            }
            if (array[k] > target) b = k-1;
            else a = k+1;
        }

        // End Condition: left > right
        return -1;
    }
};

int main() {
    Solution s;

    vector<int> nums {4,5,6,7,0,1,2};
    int target = 0;

    cout << "Found at: " << s.search(nums, target) << endl;
}
