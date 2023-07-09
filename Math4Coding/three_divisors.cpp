class Solution {
public:
	bool isThree(int n) {
		// Your code goes here
        bool is3 = false;
        for(int i=2;i<n;i++){
            if(n%i==0){
                if(is3)
                    return false;
                is3=true;
            }
        }
        if(is3)
            return true;
        return false;
	}
};