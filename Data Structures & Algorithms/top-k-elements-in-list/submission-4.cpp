class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> frequency;

        for(int num : nums){
            frequency[num]++;
        }


        vector<pair<int, int>> key;
        for(auto x : frequency){
            key.push_back({x.second, x.first});
        }

        sort(key.rbegin(), key.rend());

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(key[i].second);
        }
        return result;
    }
};