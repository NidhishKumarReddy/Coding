class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n =  board.size();
        int m = board[0].size();
        if(n == 0){return;}
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int curr = 0;
    			if(j-1 >= 0 && (board[i][j-1] == 1 || board[i][j-1] == -1)) {curr++;}
    			if(i-1 >= 0 && j-1 >= 0 &&(board[i-1][j-1] == 1 || board[i-1][j-1] == -1)) {curr++;}
    			if(i-1 >= 0 && (board[i-1][j] == 1 || board[i-1][j] == -1)) {curr++;}
    			if(i-1 >= 0 && j+1 <= m-1 &&(board[i-1][j+1] == 1 || board[i-1][j+1] == -1)) {curr++;}
    			if(j+1 <= m-1 &&(board[i][j+1] == 1 || board[i][j+1] == -1)) {curr++;}
    			if(i+1 <= n-1 && j+1 <=m-1 &&(board[i+1][j+1] == 1 || board[i+1][j+1] == -1)) {curr++;}
    			if(i+1 <= n-1 &&(board[i+1][j] == 1 || board[i+1][j] == -1)) {curr++;}
    			if(i+1 <= n-1 && j-1>=0&&(board[i+1][j-1] == 1 || board[i+1][j-1] == -1)) {curr++;}
                if(board[i][j] == 1){
                    if(curr < 2 || curr > 3) {board[i][j] = -1;}
                }
                if(board[i][j] == 0){
                    if(curr == 3) {board[i][j] = 2;}
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == -1){
                    board[i][j] = 0;
                }
                else if(board[i][j] == 2){
                    board[i][j] = 1;
                }
            }
        }
    }
};