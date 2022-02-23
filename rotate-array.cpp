// Problem statement: https://leetcode.com/problems/rotate-array
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space complexity: O(1)
// Reverse approach

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(), nums.end()-k%nums.size());
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k%nums.size());
    }
};
