class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int a = 0;
        std::unordered_map<int, int> hm;
        for (int i = 0; i < nums.size(); i++) {
            if (hm.find(nums[i]) != hm.end()) {
                hm[nums[i]]++;
            } else {
                hm[nums[i]] = 1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (hm[nums[i]] > nums.size() / 2) {
                a = nums[i];
            }
        }
        return a;
    }
};