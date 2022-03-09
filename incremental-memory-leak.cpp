// Problem statement: https://leetcode.com/problems/incremental-memory-leak/
// Author: https://github.com/Herakles100
// Time complexity: O(sqrt(n1+n2))
// Space complexity: O(1)
// Brute force approach

class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int i = 1;
        while(max(memory1,memory2) >= i){
            if(memory1 >= memory2){
                memory1 -= i;
            }
            else memory2 -= i;
            ++i;
        }
        return {i,memory1,memory2};
    }
};
