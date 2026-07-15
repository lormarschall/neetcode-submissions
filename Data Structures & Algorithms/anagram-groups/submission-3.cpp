class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> seen;

        for(int i = 0; i < strs.size(); i++){
            string original = strs[i];
            
             string sortedS = strs[i];
             sort(sortedS.begin(), sortedS.end());

            seen[sortedS].push_back(original);
        }   

        vector<vector<string>> result;
        for(auto& pair : seen){
            result.push_back(pair.second);
        }

        return result;
         }
      
};