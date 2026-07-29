class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> frequency;

        for(int num : nums){
            frequency[num]++;
        }

        vector<pair<int, int>> result;
        for(auto x : frequency){
            result.push_back({x.second, x.first});
        }

        sort(result.rbegin(), result.rend());

        vector<int> print;
        for(int i = 0; i < k; i++){
            print.push_back(result[i].second);
        }
        return print;
    }
};