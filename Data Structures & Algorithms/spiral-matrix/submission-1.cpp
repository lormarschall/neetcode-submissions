
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

      int top = 0;
      int bottom = matrix.size() - 1;
      int left = 0;
      int right = matrix[0].size() - 1;

      while(top <= bottom && left <= right){
        //right loop
        for(int c = left; c <= right; c++){
            result.push_back(matrix[top][c]);
        }
        top++;

        //down loop
        for(int r = top; r <=bottom; r++){
            result.push_back(matrix[r][right]);
        }
        right--;
        if(left <= right){
        //left loop
        if(top <= bottom){
        for(int c = right; c >= left; c--){
            result.push_back(matrix[bottom][c]);
        }
        bottom--;
        }
        
        //up loop
        for(int r = bottom; r >= top; r--){
            result.push_back(matrix[r][left]);
        }
        left++;
        }
      }
      return result;
    }
};