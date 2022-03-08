// Problem statement: https://leetcode.com/problems/number-complement
// Author: https://github.com/Herakles100
// Time complexity: O(1)
// Space complexity: O(1)
// Bitwise approach

class Solution {
public:
    int findComplement(int num) {
        unsigned bitmask = ~0;
        while(num & bitmask) bitmask <<= 1;
        return num ^ ~bitmask;    
    }
};
