class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int left = 0;
        int max_freq = 0;
        int longest = 0;

        unordered_map<char, int> counts;
        for(int right = 0; right < n; right++){
            counts[s[right]]++;
            max_freq = max(max_freq, counts[s[right]]);
            
            if(right - left + 1 - max_freq > k){
                counts[s[left]]--;
                left++;
            }
            
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
