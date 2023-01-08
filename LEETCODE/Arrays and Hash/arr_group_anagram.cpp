//
// Created by nribe on 07/01/2023.
//
#include <bits/stdc++.h>
using namespace std;

//Using Hashmap && Sorting
//
//Time Complexity : O(N * L * logL), where N is the size of strs and L is the length of the string
//
//Space Complexity : O(N * L)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> mp;
        //In map mp we will store anagrams together
        //for examples eat tea ate will be stored together
        //Inorder to identify anagrams we will use there sorted verison as key in map

        //so in case of example 1
        //  key(string)        value(vector<string>)
        //  abt                [bat]
        //  ant                [nat,tan]
        //  aet                [ate,eat,tea]

        for(string const &x:strs)
        {
            string temp=x;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(x);
        }

        vector<vector<string>>ans;

        for(pair<string,vector<string>> const &x:mp) ans.push_back(x.second);
        return ans;
    }
};

int main(){
    Solution so;

    vector<string> s = {"eat","tea","tan","ate","nat","bat"};

    so.groupAnagrams(s);
}
