class Solution {
    public:
   int findLargestElement(vector<int>& nums) {
       int max = nums[0];
       for(int i=0;i<nums.size();i++){
           if(nums[i]>max){
               max=nums[i];
           }
       }
       return max;
   }
};