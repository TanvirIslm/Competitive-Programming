#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        string s = to_string(x);
        int sz = s.size();

        for(int i = 0; i < sz; ++i){
            if(s[i] != s[sz - i - 1]){
                return false;
            }
        }
        return true;
    }
};