class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_length = 0; 
        for(int i = 0; i < n; i++){
            if(i != n){
            for(int j = i + 1; j < n; j++){
                int current = min(heights[i], heights[j]) * (j - i);
                if(max_length < current){
                    max_length = current;
                }
            }
        }
        }
        return max_length;
    }
};
