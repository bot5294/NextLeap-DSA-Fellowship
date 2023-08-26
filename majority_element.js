class Solution {
	/** 
	 * @param {number[]} nums
	 * @return {number}
	 */
	majorityElement(nums) {
		// Your code goes here
        let countMap = new Map();
        nums.forEach((num)=>{
            countMap.set(num,countMap.get(num)?countMap.get(num)+1:1);
        })
        let target = nums.length/2;
       for(let [key,value] of countMap){
           if(value>target){
               return key;
           }
       }
       return -1;
	}
};
