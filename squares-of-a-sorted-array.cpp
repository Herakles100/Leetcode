// Problem statement: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
// Author: https://github.com/Herakles100
// Time complexity: O(n)
// Space complexity: O(1)
// Two pointer approach

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int l=0, r = nums.size()-1; 
        for(int i=nums.size()-1; i >= 0; --i){
            if(abs(nums[r]) > abs(nums[l])) result[i] = nums[r]*nums[r--];
            else result[i] = nums[l] * nums[l++];
        }
        return result;
    }
};
