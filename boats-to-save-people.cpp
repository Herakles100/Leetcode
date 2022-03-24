// Problem statement: https://leetcode.com/problems/boats-to-save-people
// Author: https://github.com/Herakles100
// Time complexity: O(NlogN)
// Space complexity: O(1)
// Hashmap approach

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l=0, r=people.size()-1, res=0;
        sort(people.begin(),people.end());
        while(l<=r){
            ++res;
            if(people[l]+people[r] <= limit)
                ++l;
            --r;
        }
        return res;
    }
};
