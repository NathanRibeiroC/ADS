//
// Created by nribe on 25/12/2022.
//
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int firstBadVersion(int n, int bad){
            int l=1, r=n;

            while(l<=r){
                int mid = l + (r-l)/2; //avoid overflow, calculating mid this way

                if(isBadVersion(mid)){
                    if(!isBadVersion(mid-1)){ //case it is found
                        return mid;
                    }else{
                        r=mid-1; //otherwise look more on the left
                    }
                }else{
                   l=mid+1; //look more on the right
                }
            }
        }
};

int main(){
    Solution s;

    cout << fixed << setprecision(5)  << s.firstBadVersion(1, 1) << endl;
}