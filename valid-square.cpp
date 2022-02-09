// Problem statement: https://leetcode.com/problems/valid-square
// Author: https://github.com/Herakles100
// Time complexity: O(1)
// Space somplexity: O(n)
// Hashmap approach

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {

//         //        d1
//         //    1-------2
//         // d2 |   d3  | 
//         //    3-------4    
        
//         auto d1 = distSide(p1,p2); 
//         auto d2 = distSide(p1,p3);
//         auto d3 = distSide(p1,p4);
//         // auto d4 = distSide(p2,p3);
        
//         if(d1 == 0 || d1 == 0 || d3 == 0) return false;
        
//         if(d1 == d2 && 2*d1 == d3 && 2*d1 == distSide(p3,p4)) return true;
        
//         if(d1 == d3 && 2*d1 == d2 && 2*d1 == distSide(p2,p4)) return true;
        
//         if(d2 == d3 && 2*d2 == d1 && 2*d2 == distSide(p3,p4)) return true;
        
//         return false;
        
        unordered_set<int> s{dist(p1,p2), dist(p1,p3), dist(p1,p4), dist(p2,p3), dist(p2,p4), dist(p3,p4)};
        if(!s.count(0) && s.size()==2) return true;
        
        return false;
    }
    
    
    int dist(vector<int> p, vector<int> q){
        return ((p[0]-q[0])*(p[0]-q[0]) + (p[1]-q[1])*(p[1]-q[1]));
    }
    
    
                
};
