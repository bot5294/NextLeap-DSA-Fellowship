class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Your code here
        int maxSoFar=nums[0];
        int maxEndinghere=nums[0];
        for(int i=1;i<nums.size();i++){
            maxEndinghere = max(nums[i],maxEndinghere+nums[i]);
            maxSoFar = max(maxEndinghere,maxSoFar);
        }
        return maxSoFar;
    }
};