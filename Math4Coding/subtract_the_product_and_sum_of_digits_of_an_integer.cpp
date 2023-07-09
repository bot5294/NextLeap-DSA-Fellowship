class Solution {
public:
	long product(int n){
		long p=1;
		while(n!=0){
			int d = n %10;
			n/=10;
			p*=d;
		}
		return p;
	}
	long summation(int n){
		long sum=0;
		while(n!=0){
			int d = n%10;
			sum +=d;
			n/=10;
		}
		return sum;
	}
	int subtractProductAndSum(int n) {
		// Your code goes here
		long prod = product(n);
		long sum = summation(n);
		return (int)(prod-sum);
	}
};