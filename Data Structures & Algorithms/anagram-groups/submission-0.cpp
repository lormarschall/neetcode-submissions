class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> seen;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            std::sort(temp.begin(), temp.end());

            seen[temp].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto pair : seen){
            result.push_back(pair.second);
        }
        return result;
    }
};