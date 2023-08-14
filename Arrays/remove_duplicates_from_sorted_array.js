class Solution {
	/** 
	 * @param {number[]} nums
	 * @return {number[]}
	 */
	removeDuplicates(nums) {
		// Your code goes here
        let a=[];
        for(let i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]) continue;
            a.push(nums[i]);
        }
        if(nums[nums.length-1]!=a[a.length-1]){
            a.push(nums[nums.length-1]);
        }
        return a;
	}
};
