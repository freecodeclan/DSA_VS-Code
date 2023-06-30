#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){

	int start = 0;
	int end = n-1;
	int mid = start + (end-start)/2;

	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		if(key > arr[mid]) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
		mid = start + (end-start)/2;
	}
	return -1;
}

int main01() {
	int even[8] = {2,4,6,8,10,12,16,20};
	int odd[5] = {3,5,7,9,11};

	int evenIndex = binarySearch(even,8,16);
	cout << "Index of 16 is " << evenIndex << endl;

	int oddIndex = binarySearch(odd, 5, 5);
	cout << "Index of 5 is " << oddIndex << endl;


	return 0;
}


