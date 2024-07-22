class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0, minimum = prices[0];
        for(int i = 1; i < n; i++) {
            int curprofit = prices[i] - minimum;
            if(curprofit > maxprofit) {
                maxprofit = curprofit;
            }
            minimum = min(minimum, prices[i]);
        }
        return maxprofit;
    }
};