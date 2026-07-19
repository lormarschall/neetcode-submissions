class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> collum(9);
        vector<unordered_set<char>> boxes(9);
        vector<unordered_set<char>> row(9);
        int n = board.size();
        for(int i = 0; i < n; i++){
            for(int j = 0;  j < n; j++){
                char current = board[i][j];
               
                if(current == '.'){
                    continue;
                }
                 int box_id = (i / 3) *3 + j / 3;
             
                if(collum[j].count(current) || boxes[box_id].count(current) || row[i].count(current)){
                    return false;
                }
                collum[j].insert(board[i][j]);
                row[i].insert(board[i][j]);
                boxes[box_id].insert(current);
                
                
            }
        }
        return true;
    }
};
