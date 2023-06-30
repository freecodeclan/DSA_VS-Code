#include <iostream>
using namespace std;

void pairSum(int arr[], int size, int sum){

	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i] + arr[j] == sum){
				cout << min(arr[i], arr[j]);
				cout << max(arr[i], arr[j]);
				cout << endl;
			}
		}
	}

}

int main10() {
	int sum = 5;
	int arr[5] = {1,2,3,4,6};

	pairSum(arr, 5, sum);


	return 0;
}
