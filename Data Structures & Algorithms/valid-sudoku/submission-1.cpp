class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.size() == 9){
            for(int i=0;i<9;i++){
                
                for(int j=0;j<9;j++){
                    if(board[i][j] == '.') continue;
                    for(int k=0;k<9;k++){
                        if(board[i][k] == board[i][j] && k != j){
                            return false;
                        }
                    }
                    for(int k=0;k<9;k++){
                        if(board[k][j] == board[i][j] && k != i){
                            return false;
                        }
                    }
                    int rowStart = (i/3)*3;
                    int colStart = (j/3)*3;
                    for(int r=rowStart; r<rowStart+3; r++){
                        for(int c=colStart; c<colStart+3; c++){

                            if((r != i || c != j) && board[r][c] == board[i][j]){
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
