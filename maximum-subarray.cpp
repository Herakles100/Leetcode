// Problem statement: https://leetcode.com/problems/maximum-subarray
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space somplexity: O(1)
// Kadane's approach

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int left=0, right = nums.size()-1, sum = nums[0], res=sum;
        if(nums.empty())
            return 0;
        
        for(auto i=1; i< nums.size(); ++i){
            sum = sum + nums[i] >= nums[i] ? sum + nums[i] : nums[i];
            res = max(sum, res);
        }
        return res;
    }
};
