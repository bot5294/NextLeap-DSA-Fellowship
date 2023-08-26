class Solution {
    public:
   int largestAltitude(vector<int>& gain) {
     // Your code goes here
    int altitude = 0;
    int highest = 0;
    
    for (int netGain : gain) {
        altitude += netGain;
        highest = std::max(highest, altitude);
    }
    
    return highest;
   }
};