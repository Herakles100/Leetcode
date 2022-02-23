// Problem statement: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted
// Author: https://github.com/Herakles100
// Time complexity: O(n)
// Space complexity: O(1)
// Two pointer approach

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.empty())
            return {};
        int left= 0, right = numbers.size()-1;
        while(left<right){
            if(numbers[left]+numbers[right]== target)
                return {left+1, right+1};
            else if (numbers[left]+numbers[right] < target)
                left++;
            else 
                right--;
        }
        return {};
    }
};
