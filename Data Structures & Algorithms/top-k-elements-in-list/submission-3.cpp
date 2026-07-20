class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> frequency;
        for(int num : nums){
            frequency[num]++;
        }

        vector<int> keys;
        for(auto& pair : frequency){
            keys.push_back(pair.first);
        }

        sort(keys.begin(), keys.end(), [&frequency](int a, int b){
            return frequency[a] > frequency[b];
        });

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(keys[i]);
        }
        return result;
    }
};