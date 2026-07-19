class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int left_max = 0;
        int right_max = 0;
        int total_water = 0;

        while(left < right){
            if(left_max < height[left]){
                left_max = height[left];
            }
             if(right_max < height[right]){
                right_max = height[right];
            }
            if(left_max < right_max){
                total_water += left_max - height[left];
                left++;
            }
            else{
                total_water += right_max - height[right];
                right--;
            }

        }
        return total_water;
    }
};
