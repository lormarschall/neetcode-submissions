class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    int n = strs.size();
    for(int i = 0; i < n; i++){
        string original = strs[i];
        sort(strs[i].begin(), strs[i].end());
        string sortedS = strs[i];
        groups[sortedS].push_back(original);
    }
    vector<vector<string>> result;
    for(auto& pair : groups){
        result.push_back(pair.second);
    }
    return result;
     }
};