class Solution {
public:
	int singleNumber(vector<int>& nums) {
		// Your code goes here
        int culprit=0;
        for(int i=0;i<nums.size();i++){
            culprit ^=nums[i];
        }
        return culprit;
	}
};