// Problem statement: https://leetcode.com/problems/moving-stones-until-consecutive/
// Author: https://github.com/Herakles100
// Time complexity: O(1)
// Space complexity: O(1)
// Conditional approach

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> m = {a,b,c};
        sort(m.begin(),m.end());
        int max = m[2]-m[0]-2;
        // for(auto i:m)
        //     cout<<i;
        if(max==0)
            return{0,0};
        else if(std::min(m[2]-m[1],m[1]-m[0])<=2)
            return {1,max};
        else return {2,max};
        // if(((m[2]-m[1])==1) || ((m[1]-m[0])==1) || ((m[1]-m[0])==2) || ((m[2]-m[1])==2))
        //     return{1,max};
        // else return{2,max};
        return {0,0};
    }
};
