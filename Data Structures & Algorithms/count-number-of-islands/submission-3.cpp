class Solution {
public:
    // ---------------------------------------------------------
    // 1. THE VIRUS FUNCTION (Sinks the island)
    // ---------------------------------------------------------
    void sinkIsland(int r, int c, vector<vector<char>>& grid) {
        
        // SAFETY CHECK: If we step off the map, or hit water ('0'), stop spreading.
        // Notice we are checking for the character '0', not the integer 0.
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == '0') {
            return;
        }

        // SINK IT: Turn the land ('1') into water ('0') so we never count it again.
        grid[r][c] = '0';

        // SPREAD THE VIRUS: Send clones in all 4 directions.
        sinkIsland(r + 1, c, grid); // Spread Down
        sinkIsland(r - 1, c, grid); // Spread Up
        sinkIsland(r, c + 1, grid); // Spread Right
        sinkIsland(r, c - 1, grid); // Spread Left
    }


    // ---------------------------------------------------------
    // 2. THE MANAGER FUNCTION (Must be exactly this name for LeetCode)
    // ---------------------------------------------------------
    int numIslands(vector<vector<char>>& grid) {
        int total_islands = 0;

        // Drive the car across every single row and column
        for (int r = 0; r < grid.size(); r++) {
            for (int c = 0; c < grid[0].size(); c++) {
                
                // We found a piece of land that hasn't been sunken yet!
                if (grid[r][c] == '1') {
                    
                    // 1. Count it as a brand new island
                    total_islands++;
                    
                    // 2. Unleash the Virus starting at this exact coordinate
                    // This will sink the entire connected island instantly
                    sinkIsland(r, c, grid);
                }
            }
        }
        
        // Report the final count back to LeetCode
        return total_islands;
    }
};