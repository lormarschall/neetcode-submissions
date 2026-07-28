class Solution {
private:
    // 1. The Virus Function lives OUTSIDE the main function
    void sinkIsland(vector<vector<char>>& grid, int r, int c) {
        int rows = grid.size();
        int cols = grid[0].size();

        // FIX 3 & 4: >= rows, >= cols, and character '0'
        if (r < 0 || c < 0 || r >= rows || c >= cols || grid[r][c] == '0') {
            return;
        }

        grid[r][c] = '0';

        sinkIsland(grid, r - 1, c);
        sinkIsland(grid, r, c - 1);
        sinkIsland(grid, r + 1, c);
        sinkIsland(grid, r, c + 1); // FIX 4: typo sindIsland
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        
        // FIX 2: Use grid.size(), not numIslands.size()
        int n = grid.size();
        int n1 = grid[0].size();
        
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n1; c++) {
                
                // FIX 2: Check grid[r][c], not the function name
                if (grid[r][c] == '1') {
                    islands++;
                    
                    // FIX 4: Pass the correct 3 arguments
                    sinkIsland(grid, r, c);
                }
            }
        }
        return islands;
    }
};