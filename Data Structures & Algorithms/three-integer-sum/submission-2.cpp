class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> result;
        for(int i = 0; i < n; i++){
            int k = n -1;
            int j = i + 1;
            while(j < k){
                if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }
                else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }
                else if(nums[i] + nums[j] + nums[k] == 0){
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
        vector<vector<int>> r;
        for(auto& num : result){
            r.push_back(num);
        }
        return r;
    }
};
