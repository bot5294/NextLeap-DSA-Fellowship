class Solution {
public:
	int maxProfit(vector<int>& prices) {
		// Your code goes here
        int minSofar = prices[0];
        int maxProfitTillHere = 0;
        for (int price : prices) {
            if (price < minSofar) {
                minSofar = price;
            } else {
                maxProfitTillHere = std::max(maxProfitTillHere, price - minSofar);
            }
        }
        return maxProfitTillHere;
	}
};