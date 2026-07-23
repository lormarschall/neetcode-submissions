class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int right = n - 1;
        int left = 0;
        int left_max = 0;
        int right_max = 0;
        int total = 0;

        while(right > left){
            if(right_max < height[right]){
                right_max = height[right];
            }
            if(left_max < height[left]){
                left_max = height[left];
            }
            if(right_max <= left_max){
                total+= right_max - height[right];
                right--;
            }
            else if(left_max < right_max){
                total+= left_max - height[left];
                left++;
            }
        }
        return total;
    }
};
