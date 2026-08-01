class Solution {
public:
    // ---------------------------------------------------------
    // 1. THE VIRUS FUNCTION (Sinks the island)
    // ------------------v---------------------------------------
    void sinkIsland(int r, int c, vector<vector<char>>& grid) {
        
        // SAFETY CHECK: If we step off the map, or hit water ('0'), stop spreading.
        // Notice we are checking for the character '0', not the integer 0.
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == '0') {
            return;
        }

        grid[r][c] = '0';
        sinkIsland(r+1, c, grid);
        sinkIsland(r-1, c, grid);
        sinkIsland(r, c +1, grid);
        sinkIsland(r, c- 1, grid);
    }


    // ---------------------------------------------------------
    // 2. THE MANAGER FUNCTION (Must be exactly this name for LeetCode)
    // ---------------------------------------------------------
    int numIslands(vector<vector<char>>& grid) {
        int total_island = 0;

        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){

                if(grid[r][c] == '1'){
                    total_island++;
                    sinkIsland(r, c, grid);
                    
                }

            }
        }
        return total_island;

    }
};