//
// Created by nribe on 08/01/2023.
//

#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY:
//SPACE COMPLEXITY:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int biggest_profit=0;
        int current_profit = 0;
        int l = 0;
        int r = 1;

        while( r < prices.size()){
            if (prices[l] < prices[r]){
                biggest_profit = max(biggest_profit, prices[r] - prices[l]);
            }else{
                l=r;
            }
            r+=1;
        }

        return biggest_profit;
    }
};

int main(){
    Solution s;
    vector<int> t = {7,1,5,3,6,4};
    s.maxProfit(t);
}


