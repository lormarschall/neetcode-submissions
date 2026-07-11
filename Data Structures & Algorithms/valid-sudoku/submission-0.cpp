class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> collums;
        unordered_map<int, unordered_set<char>> boxes;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];

                // 3. Skip empty squares instantly
                if (current == '.') {
                    continue;
                }

                // 4. Calculate the 3x3 box ID
                int box_id = (i / 3) * 3 + (j / 3);

                // 5. CHECK FIRST: Look for duplicates
                if (rows[i].count(current) || collums[j].count(current) || boxes[box_id].count(current)) {
                    return false; // Found a duplicate! The board is invalid.
                }

                // 6. INSERT SECOND: If safe, add it to all tracking sets
                rows[i].insert(current);
                collums[j].insert(current);
                boxes[box_id].insert(current);
            }
        }

       
        return true;

    }
};
