// Last updated: 6/27/2026, 7:30:25 PM
class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
        for(int i=0; i<9; i++){
            if(board[i][col] == dig){
                return false;
            }
        }

        for(int j=0; j<9; j++){
            if(board[row][j] == dig){
                return false;
            }
        }

        //3*3 grid
        int sRow = (row/3) * 3;
        int sCol = (col/3) * 3;
        for(int i=sRow; i<=sRow+2; i++){
            for(int k=sCol; k<=sCol+2; k++){
                if(board[i][k] == dig){
                    return false;
                }
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board, int row, int col){
    if(row == 9){
        return true;
    }

    int nextRow = row, nextCol = col+1;
    if(nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }

    if(board[row][col] != '.'){
        return solve(board, nextRow, nextCol);
    }

    //plcae the digit
    for(char dig = '1'; dig <= '9'; dig++){
        if(isSafe(board, row, col, dig)){
            board[row][col] = dig;
            if(solve(board, nextRow, nextCol)){
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
      solve(board, 0, 0);  
    }
};