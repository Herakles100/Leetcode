// Problem statement: https://leetcode.com/problems/first-bad-version
// Author: https://github.com/Herakles100
// Time complexity: O(logN)
// Space complexity: O(1)
// Binary search approach

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n, med;
        while(right > left){
            med = left + (right -left)/2;
            if(!isBadVersion(med)) left = med+1;
            else right = med;
        }
        return left;
    }
};
