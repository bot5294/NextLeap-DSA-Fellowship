class Solution {
   public:
   vector <int> reverseArray(vector <int> &arr) {
       int l = 0;
       int n = arr.size();
       int r = n-1;
       while(l<n/2){
           int t = arr[l];
           arr[l] = arr[r];
           arr[r] =t;
           l++;
           r--;
       }
       return arr;
   }
};