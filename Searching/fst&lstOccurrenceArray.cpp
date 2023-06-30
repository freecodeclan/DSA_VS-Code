/* Find first and last occurrence of an given element */
#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key){
	int s = 0;
	int e = n-1;
	int mid = s + (e - s)/2;
	int ans = -1;
	while(s <= e) {
		if(arr[mid] == key){
			ans = mid;
			e = mid - 1;
		}
		else if(key > arr[mid]){
			s = mid + 1;
		}
		else if(key < arr[mid]){
			e = mid - 1;
		}

		mid = s + (e - s)/2;
	}
	return ans;
}

int lastOccurrence(int arr[], int n, int key){
	int s = 0;
	int e = n-1;
	int mid = s + (e - s)/2;
	int ans = -1;
	while(s <= e) {
		if(arr[mid] == key){
			ans = mid;
			s = mid + 1;
		}
		else if(key > arr[mid]){
			s = mid + 1;
		}
		else if(key < arr[mid]){
			e = mid - 1;
		}
		mid = s + (e - s)/2;
	}
	return ans;
}


int main02() {
	int even[8] = {2,3,4,4,4,4,6,8};

	cout << "The first occurrence of 4 is at index " << firstOccurrence(even, 8, 4) << endl;
	cout << "The last occurrence of 4 is at index " << lastOccurrence(even, 8, 4) << endl;
	return 0;
}
