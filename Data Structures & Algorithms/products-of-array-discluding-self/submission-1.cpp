class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix(nums.size());
        prefix[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        vector<int> postfix(nums.size());
        postfix[nums.size()-1] = 1;
        for(int j = nums.size()-2; j >= 0; j--){
            postfix[j] = postfix[j+1] * nums[j+1];
        }
        
        vector<int> results(nums.size());
        for(int i = 0; i < nums.size(); i++){
            results[i] =  prefix[i] * postfix[i];
        }

        return results;
    }
};
