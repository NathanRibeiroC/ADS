//
// Created by nribe on 08/01/2023.
//

#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY:
//SPACE COMPLEXITY:

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size();
        int ans = INT_MIN;
        int p1;
        while(i<j){
            if(height[i] < height[i+1]){
                i++;
            }

            if(height[j] < height[j-1]){
                j--;
            }

            p1 = min(height[i],height[j]);

            ans = max(ans, p1*j);

            if(i%2 == 0){
                i++;
            }else{
                j--;
            }
        }

        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    s.maxArea(nums);
}

