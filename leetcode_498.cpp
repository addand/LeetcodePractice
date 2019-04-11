class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int i = 0;
        int j = 0;
        bool up = true;
        for(int s=0 ; s < matrix.size()* matrix[0].size() ; s++){     
            res.push_back(matrix[i][j]);
            if (up) {
                if ( i > 0 && j < matrix[0].size() -1 ) {
                    i--;
                    j++;
                } else if (j < matrix[0].size()-1) {
                    j++;
                    up = false;
                } else if ((i < matrix.size()-1) {
                    i++;
                    up = false;
                } 
            } else {
                if ((i+1) < matrix.size() && (j-1) >= 0) {
                    i++;
                    j--;
                } else if ((i+1) < matrix.size()) {
                    i++;
                    up = true;
                } else if ((j+1) < matrix[0].size()){
                    j++;
                    up = true;
                } 
            }
          }
        }
            return res;
    }
};