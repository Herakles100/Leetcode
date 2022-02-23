// Problem statement: https://leetcode.com/problems/reverse-words-in-a-string-iii
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space complexity: O(N)
// Two pointer approach

class Solution {
public:
    string reverseWords(string s) {
        for(auto i=0,j=0; i<=s.size(); ++i){
            if(s[i]==' ' || i==s.size()){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        return s;
    }
};
