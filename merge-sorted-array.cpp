// Problem statement: https://leetcode.com/problems/merge-sorted-array/
// Author: https://github.com/Herakles100
// Time complexity: O(m+n)
// Space complexity: O(1)
// Linear approach

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int indx=m+n-1;
        
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j])   
                nums1[indx--]=nums1[i--];
            else
                nums1[indx--]=nums2[j--];
        }
        
        while(j>=0)
            nums1[indx--]=nums2[j--];
    }
};
