#include <iostream>
using namespace std;

void printArray1(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
        	swap(arr[i], arr[i+1]);
//            int temp = arr[1];
//            arr[1] = arr[0];
//            arr[0] = temp;
        }
    }
}
int main6() {
	int arr[6] = {2,4,7,1,-1,6};
	int brr[5] = {3,1,5,8,9};

	swapAlternate(arr,6);
	swapAlternate(brr,5);

	printArray1(arr,6);
	printArray1(brr,5);

	return 0;
}
