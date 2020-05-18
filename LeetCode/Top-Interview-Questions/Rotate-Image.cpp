class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //first find the transpose of the matrix.
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //finally getting our target matrix
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n; j++){
                swap(matrix[j][i], matrix[j][n-1-i]);
            }
        }
    }
};