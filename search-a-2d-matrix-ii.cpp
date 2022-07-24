

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i, j, n =matrix.size()-1, m=matrix[0].size();
        j=0;
        i=n;
        while(i>=0 && j<m){
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] < target)
                j++;
            else
                i--;  
        }
        return false;
    }
};
