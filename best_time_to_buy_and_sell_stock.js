class Solution {
	/** 
	 * @param {number[]} prices
	 * @return {number}
	 */
	maxProfit(prices) {
		// Your code goes here
        let minPrice = prices[0];
        let maxProfit = 0;
        prices.forEach((price)=>{
            if(price<minPrice){
                minPrice=price;
            }else{
                maxProfit = Math.max(price-minPrice,maxProfit);
            }
        })
        return maxProfit;
	}
};
