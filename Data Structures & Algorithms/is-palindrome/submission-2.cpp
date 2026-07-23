class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string clean = "";

       for(int i = 0; i < n; i++){
            if(isalnum(s[i])){
                clean+= tolower(s[i]);
            }
       }

        int left = 0;
        int right = clean.length() - 1;
       while(left <= right){
           
            if(clean[left]==clean[right]){
                right--;
                left++;
            }
            else{
                return false;
            }
       }
       return true;

    }
};
