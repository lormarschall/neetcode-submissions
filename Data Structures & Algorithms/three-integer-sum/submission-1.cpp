class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        
        for(int i = 0; i < nums.size() - 1; i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[i] + nums[k] + nums[j] < 0){
                    j++;
                }
                else if(nums[i] + nums[k] + nums[j] > 0){
                    k--;
                }
                else if(nums[i] + nums[k] + nums[j] == 0){
                    if(result.count({nums[i], nums[j], nums[k]})){
                        k--;
                    }
                    else{
                    result.insert({nums[i], nums[j], nums[k]});
                    k--;
                    }
                }
            }
        }
        return vector<vector<int>>(result.begin(), result.end());

        
    }
};
