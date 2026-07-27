class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n1 = s1.length();
      int n2 = s2.length();

      if (n1 > n2) return false;
      vector<int> count1(26, 0);
      vector<int> count2(26, 0);

      for(int i = 0; i < n1; i++){
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
      }

      if(count1 == count2){
        return true;
      }

      int left = 0;

      for(int right = n1; right < n2; right++){
        count2[s2[right] - 'a']++;

        count2[s2[left] - 'a']--;
        left++;
        
        if(count1 == count2){
          return true;
        }
      }
      return false;
    }
};
