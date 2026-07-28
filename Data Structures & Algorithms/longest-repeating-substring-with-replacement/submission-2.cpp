class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int left = 0; 
        int max_freq = 0;
        int longest = 0;
        unordered_map<int, int> count;
        for(int right = 0; right < n; right++){
            count[s[right]]++;
            max_freq = max(max_freq, count[s[right]]);

            while(right - left + 1 - max_freq > k){
                count[s[left]]--;
                left++;
            }

            longest = max(longest, right -left + 1);
        }
        return longest;
    }
};
