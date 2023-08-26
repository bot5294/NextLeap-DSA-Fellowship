/**
 * @param {number[]} nums
 * @return {number}
 */
function maxProductDifference(nums) {
    let smallest = Infinity, secondSmallest = Infinity;
    let largest = -Infinity, secondLargest = -Infinity;
    
    for (const num of nums) {
        if (num <= smallest) {
            secondSmallest = smallest;
            smallest = num;
        } else if (num <= secondSmallest) {
            secondSmallest = num;
        }
        
        if (num >= largest) {
            secondLargest = largest;
            largest = num;
        } else if (num >= secondLargest) {
            secondLargest = num;
        }
    }
    
    return (largest * secondLargest) - (smallest * secondSmallest);
};