// Problem statement: https://leetcode.com/problems/search-in-rotated-sorted-array-ii
// Author: https://github.com/Herakles100
// Time complexity: O((N+1)logN)
// Space complexity: O(1)

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return binary_search(nums.begin(),nums.end(),target);
    }
};
