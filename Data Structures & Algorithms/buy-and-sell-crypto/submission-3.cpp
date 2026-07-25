class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int left = 0;
      int right = 0;
      int max_p = 0; 

      while(right < prices.size()){
        max_p = max(max_p, prices[right] - prices[left]);
        if(prices[left] <= prices[right]){
            right++;
        }
        else{
            left = right;
        }
      }

      return max_p;
    }
};
