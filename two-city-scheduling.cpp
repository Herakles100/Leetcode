// Problem statement: https://leetcode.com/problems/boats-to-save-people
// Author: https://github.com/Herakles100

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int total = 0;
        vector<int> minima;
        for(auto cost : costs){
            total += cost[0];
            minima.push_back(cost[1]-cost[0]);
        }
        sort(minima.begin(), minima.end());
        for(int i=0; i<minima.size()/2;++i)
            total += minima[i];
        return total;
    }
};
