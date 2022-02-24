// Problem statement: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space complexity: O(N)
// Sliding window approach

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        int countMax =0;
        int l =0;
        unordered_set<char> visited;
        for(auto r=0; r< s.size(); ++r){
            if(visited.find(s[r]) == visited.end()){
                visited.insert(s[r]);
                countMax = max(countMax, r-l+1);
            }
            else{
                while(l!=r && s[l]!=s[r])
                    visited.erase(s[l++]);
                l++;
                countMax = max(countMax, r-l+1);
            }
        }

        return countMax;
    }
};
