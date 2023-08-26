class Solution {
    public:
   int maxProductDifference(vector<int>& nums) {
     // Your code goes here
     int max = INT_MIN;
     int sMax = INT_MIN;
     int min = INT_MAX;
     int sMin = INT_MAX;
    for(int num:nums){
        if(num>max){
            sMax = max;
            max=num;
        }else if(num>sMax){
            sMax=num;
        }
        if(num<min){
            sMin=min;
            min=num;
        }else if(num<sMin){
            sMin=num;
        }
    }
    return (max*sMax)-(min*sMin);
   }
};