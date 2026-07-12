class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> countMap;
        for(int num : nums){
            countMap[num]++;
        }
        
        vector<pair<int, int>> biggest(countMap.begin(), countMap.end());

        // Sorts the vector based on the frequency (second item) in descending order
sort(biggest.begin(), biggest.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second; 
});
        vector <int> result;
        for(int i = 0; i < k; i++){
            result.push_back(biggest[i].first);
        }
        return result;
    }
};
