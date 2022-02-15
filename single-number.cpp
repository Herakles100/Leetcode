// Problem statement: https://leetcode.com/problems/single-number
// Author: https://github.com/Herakles100
// Time complexity: O(n)
// Space somplexity: O(1)
// Bitwise XOR

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int comp = 0;
        for(auto i: nums)
            comp ^= i;
        return comp;
    }
};
