#include <iostream>
using namespace std;

int getMin(int arr[],int n){
	int mini = INT_MAX;
	for(int i=0; i<n;i++){
		mini = min(mini,arr[i]); // In-built function to find minimum value
//		if(arr[i] < min){
//			min = arr[i];
//		}
	}
	return mini;
}

int getMax(int arr[], int n){
	int Maxi = INT_MIN;
	for(int i=0; i<n; i++){
		Maxi = max(Maxi, arr[i]); // In-built function to find maximum
////		if(arr[i] > Max){
////			Max = arr[i];
//		}
	}
	return Maxi;
}

int main3(){
	int size;
	cout << "Enter the size of an array:  ";
	cin >> size;

	int arr[15];
	cout << "Enter the elements of an array" << endl;
	for(int i=0; i<size;i++){
		cin >> arr[i];
	}
	cout << "The minimum value of an array is " << getMin(arr,size) << endl;
	cout << "The maximum value of an array is " << getMax(arr,size) << endl;

	return 0;

}
