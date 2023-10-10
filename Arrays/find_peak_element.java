class Solution {
	public int findPeakElement(int[] nums) {
		// Your code goes here
        int s = 1;
        int n = nums.length;
        int e = n-2;
        if(n<=1 || nums[s]<nums[0]){
            return 0;
        }
        if(nums[e]<nums[n-1]){
            return n-1;
        }
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid-1]<nums[mid]){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return -1;
	}
}