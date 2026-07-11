class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k = nums.size();
       for(int i = 0; i < nums.size(); i++){
         if(nums[i] == val){
            k--;
            nums[i] = 200000;
         }
       } 
       sort(nums.begin(), nums.end());
       return k;

    }
};