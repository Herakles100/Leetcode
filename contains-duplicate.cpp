// Problem statement: https://leetcode.com/problems/contains-duplicate
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space complexity: O(N)
// Hashmap approach

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto i:nums){
            ++count[i];
            if(count[i]>1)
                return true;
        }
        return false;
    }
};
