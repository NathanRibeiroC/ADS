#include <bits/stdc++.h>
using namespace std;

//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        int s_size = s.size(), t_size = t.size();
//
//        if(s_size!=t_size){
//            return false;
//        }
//
//        vector<char> v_s;
//        vector<char> v_t;
//
//        for(int i=0;i<s_size;i++){
//            v_s.push_back(s.at(i));
//        }
//
//        sort(v_s.begin(), v_s.end());
//
//        for(int i=0;i<t_size;i++){
//            v_t.push_back(t.at(i));
//        }
//
//        sort(v_t.begin(), v_t.end());
//
//        if(v_s == v_t){
//            return true;
//        }else{
//            return false;
//        }
//    }
//};

class Solution{
    public:
        bool isAnagram(string s, string t) {
            if(s.size()!=t.size()) return false;
            map<char,int>map;

            for(int i=0;i<s.size();i++){
                map[s[i]]++;
                map[t[i]]--;//map[t[i]] = map[t[i]] - 1;
            }
            for(auto it=map.begin();it!=map.end();it++)
                if(it->second!=0)return false;
            return true;
        }
};

int main(){
    Solution so;

    string s="xnagram";
    string t="aagaram";

    cout << so.isAnagram(s,t) << endl;
}