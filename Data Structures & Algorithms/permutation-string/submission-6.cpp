class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n1 = s1.length();
      int n2 = s2.length();

      unordered_map<char, int> count1;
      for(int i = 0; i < n1; i++){
        count1[s1[i]]++;
      }

      int left = 0;
      unordered_map<char, int> count2;
      for(int right = 0; right < n2; right++){
        count2[s2[right]]++;
        if(right + 1 > left + n1){
          count2[s2[left]]--;
          if(count2[s2[left]] == 0){
            count2.erase(s2[left]);
          }
          left++;
        }
        if(count1 == count2){
          return true;
        }
      }
      return false;

    }
};
