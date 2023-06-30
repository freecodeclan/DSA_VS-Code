/* Find the peak Index in mountain array */
#include <iostream>
using namespace std;

int peakIndex(int arr[], int n){
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s)/2;

	while (s < e){
		if(arr[mid] < arr[mid + 1]){
			s = mid + 1;
		}
		else{
			e = mid;
		}
		mid = s + (e - s)/2;
	}
	return s;
}

int main03() {
	int arr[4] = {3,4,5,1};

	cout << " The peak index of mountain is " << peakIndex(arr, 4);


	return 0;
}
