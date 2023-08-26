class Solution {
public:
	vector<int> sortColors(vector<int>& nums) {
		// Your code goes here
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]==2){
                int t = nums[high];
                nums[high] = nums[mid];
                nums[mid] = t;
                high--;
            }else if(nums[mid]==0){
                int t = nums[low];
                nums[low] = nums[mid];
                nums[mid] = t;
                low++;
                mid++;
            }else{
                mid++;
            }
        }
        return  nums;
	}
};