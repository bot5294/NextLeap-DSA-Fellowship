class Solution {
public:
	int secondSmallest(vector<int>& nums) {
		int sm = INT_MAX;
        int ssm = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<sm){
                ssm=sm;
                sm=nums[i];
            }else if(nums[i]<ssm && nums[i]!=sm){
                ssm = nums[i];
            }
        }
        return ssm;
	}
};