class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int no_of_rows = matrix.size();
        int no_of_cols = matrix[0].size();
        bool first_row_contain_zero = false;
        
        for(int col = 0; col < no_of_cols; col++){
            if(matrix[0][col] == 0){
                    first_row_contain_zero = true;
            }
            for(int row = 1; row < no_of_rows; row++){
                if(matrix[row][col] == 0){
                    matrix[0][col] = 0;
                }
            }
        }
        
        for(int row = 1; row < no_of_rows; row++){
            bool curr_row_contain_zero =  false;
            for(int col = 0; col < no_of_cols; col++){
                if(matrix[row][col] == 0){
                    curr_row_contain_zero = true;
                }
            }
            for(int col = 0; col < no_of_cols; col++){
                if(curr_row_contain_zero == true || matrix[0][col] == 0){
                    matrix[row][col] = 0;
                }
            }
        }
        
        if(first_row_contain_zero == true){
            for(int col = 0; col < no_of_cols; col++){
                matrix[0][col] = 0;
            }
        }
        return;
    }
};