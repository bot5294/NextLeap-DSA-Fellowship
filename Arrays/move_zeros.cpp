class Solution {
public:
	vector<int> moveZeros(vector<int>& nums) {
		// Your code goes here
        int n = nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                    int t = nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                    j++;
                }
            }
        return nums;
    }
};