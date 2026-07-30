class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counts;
        
        for(int num : nums){
            counts[num]++;
        }

        vector<pair<int, int>> box;
        
        for(auto x : counts){
            box.push_back({x.second, x.first});
        }

        sort(box.rbegin(), box.rend());

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(box[i].second);
        }
        return result;
    }
};