class Solution {
public:
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
	int minimumSum(int num) {
		int arr[4];
		int n= num;
		int i=0;
		while(n!=0){
			arr[i] = n%10;
			n/=10;
			i++;
		}
		bubbleSort(arr,4);
		int a = arr[2]+(10*arr[0]);
		int b = arr[3]+(10*arr[1]);
		return a+b;
	}
};