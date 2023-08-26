class Solution {
	/** 
	 * @param {string} s
	 * @return {number}
	 */
	getMaxDifference(s) {
		// Your code goes here
        // taking o as positive and 1 as negative.
        let maxSoFar = 0;
        let maxTillHere = 0;
        for(let i=0;i<s.length;i++){
            if(s[i]==0){
                maxTillHere++;
                maxSoFar = Math.max(maxTillHere,maxSoFar);
            }else{
                maxTillHere--;
                if(maxTillHere<0){
                    maxTillHere=0;
                }
            }
        }
        if(maxSoFar==0){
            return -1;
        }
        return maxSoFar;
	}
};
