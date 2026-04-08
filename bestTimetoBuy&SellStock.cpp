class Solution {
public:
   int maxProfit(vector<int>& prices) {
    int minPrice = prices[0], pro = 0, maxPro = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        pro = prices[i] - minPrice;
        if (pro > maxPro) {
            maxPro = pro;
        }
    }
    return maxPro;
}
};
