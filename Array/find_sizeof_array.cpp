#include <iostream>
using namespace std;

void print_array(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
}
int main2(){
	int arr[10] = {2,7};

	print_array(arr, 10);

	cout << endl;

	int size = sizeof(arr)/sizeof(int);
	cout << "The size of array is " << size;

	return 0;


}
