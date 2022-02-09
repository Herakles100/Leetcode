// Problem statement: https://leetcode.com/problems/k-diff-pairs-in-an-array
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space somplexity: O(N)
// Hashmap approach

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> m;
        for (auto n: nums)
            m[n]++;
        for(auto x : m){
            if((!k && (x.second>1))||(k && m.count(x.first+k))) count++;
        }
        return count;
    }
};
