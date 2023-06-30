#include <iostream>
using namespace std;

int sum_of_array(int arr[], int size){
	int sum = 0;
	for(int i=0; i<size; i++){
		sum += arr[i];
	}
	return sum;
}
int main1(){
	int n;
	cout << "Enter the size of an array: ";
	cin >> n;

	int arr[n];
	cout << "Enter the elements to be entered in an array: " << endl;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	for(int i=0; i<n; i++){
		cout << arr[i] << " " << endl;
	}

	int total_sum = sum_of_array(arr, n);
	cout << "The total sum of an array is: " << total_sum;

	return 0;

}
