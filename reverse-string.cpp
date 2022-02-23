// Problem statement: https://leetcode.com/problems/reverse-string
// Author: https://github.com/Herakles100
// Time complexity: O(n)
// Space complexity: O(n)
// Two pointer approach

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size()-1;
        char tmp;
        while(l < r){
            tmp = s[l];
            s[l++] = s[r];
            s[r--] = tmp;
        }
        return;
    }
};
