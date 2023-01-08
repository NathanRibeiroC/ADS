//
// Created by nribe on 08/01/2023.
//

#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(N)

class Solution {
public:
    bool isPalindrome(string s) {
        for_each(
                s.begin(),
                s.end(),
                [](char & c) {
                    c = ::tolower(c);
                });

        auto it = remove_if(s.begin(), s.end(), [](char const &c) {
            return !isalnum(c);
        });

        s.erase(it, s.end());

        string aux = s;

        reverse(aux.begin(), aux.end());

        if(s == aux){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution s;

    string s1 = " ";

    s.isPalindrome(s1);
}