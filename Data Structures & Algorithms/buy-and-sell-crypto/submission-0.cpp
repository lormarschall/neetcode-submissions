class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int left = 0;
       int right = 0;
       int max_profit = 0;
       while(right < prices.size()){
        if(prices[right] >= prices[left]){
            if(prices[right] - prices[left] > max_profit){
                max_profit = prices[right] - prices[left];
            }
            right++;
        }
       else{
        left = right;
        right++;
       }
       }
       return max_profit;
    }
};
