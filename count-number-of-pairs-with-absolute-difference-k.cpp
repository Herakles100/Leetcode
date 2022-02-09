// Problem statement: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
// Author: https://github.com/Herakles100
// Time complexity: O(N^2)
// Space somplexity: O(N^2)
// Nested loop approach

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for(auto i:nums){
            for(auto j:nums){
               if(abs(i-j)==k)
                   count++;
            }
        }
        return count/2;     
    }
};
