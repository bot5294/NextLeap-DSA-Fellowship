class Solution {
public:
	int getMaxDifference(string s) {
		// Your code goes here
        int maxTillHere = 0;
        int maxSoFar = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                maxTillHere++;
                maxSoFar = std::max(maxSoFar,maxTillHere);
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