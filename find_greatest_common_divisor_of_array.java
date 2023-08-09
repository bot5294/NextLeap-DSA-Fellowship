class Solution {
    public int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    public int[] getMinMax(int[] nums){
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int num : nums) {
            min = Math.min(min, num);
            max = Math.max(max, num);
        }
        return new int[] { min, max };
    }
	public int findGCD(int[] nums) {
		// Your code goes here
        int arr[] = getMinMax(nums);
        return gcd(arr[0],arr[1]);
	}
}