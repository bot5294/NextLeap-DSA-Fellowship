class Solution {
public:
	int pivotInteger(int n) {
		int l=1;
		int r=n;
		int tsum = (n*(n+1))/2;
		while(l<r){
			int mid = (l+r)/2;
			int left = (mid*(mid+1))/2;
			int right = tsum-left+mid;
			if(left==right){
				return mid;
			}else if(left<right){
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
		return -1;
	}
};