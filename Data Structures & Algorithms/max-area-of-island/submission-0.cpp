class Solution {
public:
    int getIslandArea(vector<vector<int>>& grid, int r, int c){
        int rows = grid.size();
        int cols = grid[0].size();

        if (r < 0 || c < 0 || r >= rows || c >= cols || grid[r][c] == 0) {
            return 0; 
        }
        
        grid[r][c] = 0;

        int up = getIslandArea(grid, r - 1, c);
        int down = getIslandArea(grid, r + 1, c);
        int left = getIslandArea(grid, r, c - 1);
        int right = getIslandArea(grid, r, c + 1);

        return 1 + up + down + left + right;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int longest = 0;
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 1){
                    // FIX 1: Pass the grid, row, and col
                    int num = getIslandArea(grid, i, j);
                    
                    // FIX 2: Check the max INSIDE the if statement
                    longest = max(longest, num);
                }
            }
        }
        return longest;
    }
};