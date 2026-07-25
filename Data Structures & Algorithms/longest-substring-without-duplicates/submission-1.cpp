class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
      int left = 0;
      int count = 0;
      unordered_map<char, int> counts;
      for(int right = 0; right < s.length(); right++){
        counts[s[right]]++;
        while(counts[s[right]] > 1){
          counts[s[left]]--;
          left++;
        }
        count = max(count, right - left + 1);
      }
      return count;
    }
};
