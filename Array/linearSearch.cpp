// Find the given element in an array
#include <iostream>
using namespace std;

bool keyPresent(int arr[], int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i] == key){
			return 1;
		}
	}
	return 0;
}
int main4(){
	int n;
	cout << "Enter the size of an array:";
	cin >> n;

	int arr[8];
	cout << "Enter the elements of an array: " << endl;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	int key;
	cout << "Enter the element to be searched: ";
	cin >> key;

	bool found = keyPresent(arr, n, key);

	if(found) {
		cout << "Key is present";
	}
	else{
		cout << "Key is absent";
	}
	return 0;
}
