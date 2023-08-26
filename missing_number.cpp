class Solution {
public:
	int missingNumber(vector<int>& nums) {
		// Your code goes here
    int missing = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        missing ^= i ^ nums[i];
    }

    return missing;
	}
};