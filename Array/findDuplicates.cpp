#include <iostream>
using namespace std;

int duplicate(int arr[], int size){
	int ans = 0;

	// XOR all array elements
	for(int i=0; i<size; i++){
		ans = ans ^ arr[i];
	}

	// XOR [1, n-1]
	for(int i=1; i<size; i++){
		ans = ans ^ i;
	}
	return ans;

}
int main8() {
	int arr[6] = {1,2,3,1,4,5};

	cout << "The duplicate value is " << duplicate(arr, 6) << endl;

	return 0;
}
