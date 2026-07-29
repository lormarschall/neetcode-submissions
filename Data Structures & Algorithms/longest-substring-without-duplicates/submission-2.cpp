class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.length();

    int left = 0;
    int count = 1;
    int longest = 0;
    unordered_map<char, int> counts;
    
      for(int right = 0; right < n; right++){
         counts[s[right]]++;
        while(counts[s[right]] > 1){
            counts[s[left]]--;
            left++;
        }
        
       
        count = right - left + 1;
        longest = max(longest, count);
      }
      return longest;
     
    }
};
