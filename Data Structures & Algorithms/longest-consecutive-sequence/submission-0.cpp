class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 1. Shovel everything into the VIP bag instantly
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest_streak = 0;

        for (int num : nums) {
            // 2. Find the "Left Wall" (the start of a chain)
            if (seen.count(num - 1) == 0) {
                int current_num = num;
                int current_streak = 1;

                // 3. The Chaser: Run up the chain directly inside the set
                while (seen.count(current_num + 1)) {
                    current_num += 1;
                    current_streak += 1;
                }

                // 4. Update the global trophy score
                longest_streak = max(longest_streak, current_streak);
            }
        }

        return longest_streak;
    }
};