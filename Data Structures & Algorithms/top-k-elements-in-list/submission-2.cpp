class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> frequency;
       int n = nums.size();
       for(int num : nums){
            frequency[num]++;
       }

        vector<int> result;
        for(auto pair : frequency){
            result.push_back(pair.first);
        }

       sort(result.begin(), result.end(), [&frequency](int a, int b) {
    return frequency[a] > frequency[b];
}); // <-- Closed parenthesis and semicolon here!
        return vector<int>(result.begin(), result.begin() + k);
    }
};