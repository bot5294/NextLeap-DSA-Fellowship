class Solution {
	/** 
	 * @param {number[]} nums
	 * @return {number}
	 */
	missingNumber(nums) {
		// Your code goes here
        let n = nums.length;
        let expectedSum = n*(n+1)/2;
        let actualSum = 0;
        nums.forEach((num)=>{
            actualSum += num;
        })
        return expectedSum-actualSum;
	}
};
