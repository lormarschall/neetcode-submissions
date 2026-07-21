class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 1. Shovel everything into the VIP bag instantly
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest_streak = 0;
        for(int i = 0; i < nums.size(); i++){
            int streak = 1;
           while(seen.count(nums[i] + 1)){
               streak++;
               nums[i]++;
           }
           if(streak > longest_streak){
                longest_streak = streak;
           }
        }

        return longest_streak;

    }
};