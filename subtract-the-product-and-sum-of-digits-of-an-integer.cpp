// Problem statement: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Author: https://github.com/Herakles100
// Time complexity: O(logN)
// Space complexity: O(1)
// Brute force approach

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1, sum=0;
        while(n>0){
            prod *= n%10;
            sum += n%10;
            n /= 10;
        }
        return prod - sum;
    }
};
