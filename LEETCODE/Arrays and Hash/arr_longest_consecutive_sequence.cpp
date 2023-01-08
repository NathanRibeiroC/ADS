//
// Created by nribe on 08/01/2023.
//

//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end()); // this is faster

        int longest_sequence = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i] - 1)!=s.end())
                continue;

            else
            {
                int count = 0;
                int current_element = nums[i];

                while(s.find(current_element) != s.end())
                {
                    count++;
                    current_element++;
                }

                longest_sequence = max(longest_sequence,count);
            }
        }

        return longest_sequence;
    }
};

int main(){

    Solution s;

    vector<int> nums = {9,1,-3,2,4,8,3,-1,6,-2,-4,7};

    s.longestConsecutive(nums);
}