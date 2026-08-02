class Solution {
public:
    int getsIslandArea(vector<vector<int>>& grid, int r, int c){
        int rows = grid.size();
        int cols = grid[0].size();

        if(r < 0 || c < 0 || r >= rows || c >= cols || grid[r][c] == 0){return 0;}

        grid[r][c] = 0;
        int up = getsIslandArea(grid, r - 1, c);
        int down = getsIslandArea(grid, r + 1, c);
        int left = getsIslandArea(grid, r, c - 1);
        int right = getsIslandArea(grid, r, c + 1);

        return 1 + up + down + left + right;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int longest = 0;

        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(grid[r][c] == 1){
                    int num = getsIslandArea(grid, r, c);
                    longest = max(longest, num);
                }
                
            }
        }
        return longest;
    }
};