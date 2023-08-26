/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
function twoSum(nums, target) {
    const numToIndex = new Map();
    const result = [];

    for (let i = 0; i < nums.length; ++i) {
        const complement = target - nums[i];
        if (numToIndex.has(complement)) {
            result.push(numToIndex.get(complement));
            result.push(i);
            break;
        }
        numToIndex.set(nums[i], i);
    }

    return result;
};