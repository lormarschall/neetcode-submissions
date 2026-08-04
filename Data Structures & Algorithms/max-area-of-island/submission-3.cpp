class Solution {
public:
    int searcharea(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >=             grid[0].size() || grid[r][c] == 0){ return 0;}

        grid[r][c] = 0;
        
        int up = searcharea(grid, r - 1, c);
        int down = searcharea(grid, r + 1, c);
        int left =  searcharea(grid, r, c -1);
        int right = searcharea(grid, r, c + 1);

        return 1 + up + down + left + right;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int longest = 0;

        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(grid[r][c] == 1){
                    int num = searcharea(grid, r, c);
                    longest = max(longest, num);
                }
            }
        }
        return longest;
    }
};