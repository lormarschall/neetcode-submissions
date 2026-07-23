class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n1 = s1.length();
      int n2 = s2.length();

     if(n1 > n2) return false;

     unordered_map<char, int> map1;
     unordered_map<char, int> map2;

      for(int i = 0; i < n1; i++){
        map1[s1[i]]++;
        map2[s2[i]]++;
      }

      if(map1 == map2) return true;

      for(int i = n1; i < n2; i++){
        map2[s2[i]]++;

        char left_char = s2[i - n1];
        map2[left_char]--;

        if(map2[left_char] == 0){
            map2.erase(left_char);
        }
        if(map1 == map2) return true;
      }
      return false;
    }
};
