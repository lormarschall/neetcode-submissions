class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     vector<unordered_set<char>> collum(9);
     vector<unordered_set<char>> row(9);
     vector<unordered_set<char>> boxes(9);
     
     for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            char current = board[i][j];
            if(current == '.'){
                continue;
            }
            
            int box_id = (i / 3) * 3 + (j / 3);

            if(collum[j].count(current) || row[i].count(current) || boxes[box_id].count(current)){
                return false;
            }
            collum[j].insert(current);
            row[i].insert(current);
            boxes[box_id].insert(current);
        }
     }  
     return true;

    }
};
