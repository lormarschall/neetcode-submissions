class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char, int> counts;
        int max_freq = 0;
        int longest = 0;
        int left = 0;

        for(int right = 0; right < s.length(); right++){
            counts[s[right]]++;

            max_freq = max(max_freq, counts[s[right]]);

            if((right - left + 1) - max_freq > k){
                counts[s[left]]--;
                left++;
            }
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
