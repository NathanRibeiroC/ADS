//
// Created by nribe on 24/12/2022.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int guessNumber(int num) {
        int left=1, right=num;
        while(left<=right){
            int pick = left + (right - left)/2;
            if(pick == num){
                return pick;
            }
            if(pick > num){
                right = pick-1;
            }
            else{
                left = pick+1;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;

    vector<int> nums {-1,0,3,5,9,12};
    int target = -1;

    cout << fixed << setprecision(5) << s.guessNumber(10) << endl;
}
