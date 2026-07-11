class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> countMap;
        for(int num:nums){
            countMap[num]++;
        }

        // 2. Step: Set up the empty "Infinity Drawers"
        vector<vector<int>>buckets(nums.size()+1);

        //3. Step: The Flip
        for(auto&pair : countMap){
            int number = pair.first;
            int frequency = pair.second;
            buckets[frequency].push_back(number);
        }

        //4. Step: Collect the top K elements
        vector<int> result;

        for(int i = buckets.size()-1; i >= 0; i--){
            for(int number : buckets[i]){
                result.push_back(number);
            }
            if(result.size() == k){
            return result;
        }
        }
        

    }
};
