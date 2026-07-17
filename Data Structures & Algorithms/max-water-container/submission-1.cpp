class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_length = 0; 
        int left = 0;
        int right = n - 1;

        while(left <= right){
            int current = min(heights[left], heights[right]) * (right - left);
            if(current > max_length){
                max_length = current;
            }
            if(heights[left] < heights[right]){
                left++;
            }

            else if(heights[left] >= heights[right]){
                right--;
            }

        }
        return max_length;
    }
};
