// Problem statement: https://leetcode.com/problems/permutation-sequence//
// Author: https://github.com/Herakles100
// Time complexity: O(n^2)
// Space complexity: O(2n)
// Iterative approach

class Solution {
public:
    string getPermutation(int n, int k) {
        string s;
        // create a vector for storing indices
        vector<int> m(n);
        for(int z =0; z<n; ++z)
            m[z] = z+1;
        // appending to string based on index
        while(n>0){
            auto fac = tgamma(n);
            // finding the index of the number that needs to be appended
            int indx = (k-1)/fac;   
            s += to_string(m[indx]);
            // removing that number from the list
            m.erase(m.begin()+indx);
            // modifying k based on permutations possible previously
            k -= fac*indx;
            --n;
        }
        return s;
    }
};
