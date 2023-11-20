class Solution {
	public String checkNumber(int num) {
		// Your code goes here
        if((num&1)==1){
            return "Odd";
        }
        return "Even";
	}
}