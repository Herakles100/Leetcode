// Problem statement: https://leetcode.com/problems/search-insert-position
// Author: https://github.com/Herakles100
// Time complexity: O(logN)
// Space complexity: O(1)
// Binary search approach

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right = nums.size()-1, mid;
        while(left<right){
            mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid+1;
            else right = mid;
        }
        return nums[left] < target ? left+1 : left;
    }
};
