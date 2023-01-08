//
// Created by nribe on 08/01/2023.
//

#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int j = numbers.size()-1;
        int i=0;

        while(i<j){

            if(numbers[i] + numbers[j] == target){
                return {i+1,j+1};
            }

            else if(numbers[i] + numbers[j] < target){
                i++;
            }

            else{
                j--;
            }
        }

        return {i+1,j+1};
    }
};

int main(){
    Solution s;
    vector<int> nums = {-1,0};
    s.twoSum(nums,-1);
}