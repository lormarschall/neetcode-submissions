
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0; 
        int right = matrix[0].size() - 1;

        while(top <= bottom && left <= right){
            // 1. Right loop
            for(int r = left; r <= right; r++){
                result.push_back(matrix[top][r]);
            }
            top++; // FIX: Move top boundary DOWN

            // 2. Down loop
            for(int c = top; c <= bottom; c++){
                result.push_back(matrix[c][right]);
            }
            right--; // Move right boundary LEFT

            // FIX: Check if walls crossed
            if(top <= bottom) {
                // 3. Left loop
                for(int r = right; r >= left; r--){
                    result.push_back(matrix[bottom][r]);
                }
                bottom--; // FIX: Move bottom boundary UP
            }

            // FIX: Check if walls crossed
            if(left <= right) {
                // 4. Up loop
                for(int c = bottom; c >= top; c--){ // FIX: c-- instead of c++
                    result.push_back(matrix[c][left]);
                }
                left++; // Move left boundary RIGHT
            }
        }
        return result;
    }
};