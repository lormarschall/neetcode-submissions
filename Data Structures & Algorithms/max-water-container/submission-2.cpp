class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n - 1;
        int biggest = 0;

        for(int i = 0; i < n; i++){
            int current = min(heights[left], heights[right]) * (right - left);
            if(current > biggest){
                biggest = current;
            }

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return biggest;
    }
};
