class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n1 = s1.length();
      int n2 = s2.length();

      unordered_map<char, int> counts1;
      for(int i = 0; i < n1; i++){
        counts1[s1[i]]++;
      }

      unordered_map<char, int> counts2;
      int left = 0;

      for(int right = 0; right < n2; right++){
        counts2[s2[right]]++;

        if(left + n1 < right + 1){
          counts2[s2[left]]--;
          if(counts2[s2[left]] == 0){
            counts2.erase(s2[left]);
          }
          left++;
        }
        if(counts1 == counts2){
          return true;
        }
      }
      return false;
    }
};
