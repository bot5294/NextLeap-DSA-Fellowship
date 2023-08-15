class Solution {
public:
	int secondLargest(vector<int>& nums) {
        int max = INT_MIN;
        int smax = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                smax = max;
                max = nums[i];
            }else if(nums[i]>smax && nums[i]!=max){
                smax = nums[i];
            }
        }
        return smax;
	}
};