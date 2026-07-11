class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<int, int> seen;
        for(int i = 0; i < s.size(); i++){
            if(seen.count(s[i])){
                seen[s[i]]++;
            }
            else{
                seen[s[i]] = 1;
            }
        }

        if(s.size() == t.size()){
        for(int j = 0; j < t.size(); j++){
            if(seen[t[j]] <= 0){
                return false;
            }
            if(seen.count(t[j])){
                seen[t[j]]--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
    }
};
