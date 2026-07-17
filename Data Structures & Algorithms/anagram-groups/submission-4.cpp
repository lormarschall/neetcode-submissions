class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> seen;
        int n = strs.size();  

        for(int i = 0; i < n; i++){
            string original = strs[i];
            sort(strs[i].begin(), strs[i].end());
            string sortedS = strs[i];
            seen[sortedS].push_back(original);
        }

        vector<vector<string>> result;
        for(auto& pair : seen){
            result.push_back(pair.second);
        }
        return result;
         }
};