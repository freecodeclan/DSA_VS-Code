/* Declaring and Accessing 2D Array */
#include <iostream>
using namespace std;

int main001() {
	int arr[3][4] = {{1,2,3,4}, {2,4,6,8}, {1,3,5,7}};  // Fully in stack memory

	int *arr1[3]; 			// Partially created in Heap Memory
	arr1[0] = new int[4];
	arr1[1] = new int[4];
	arr1[2] = new int[4];



	int **arr2; 			// Fully created in Heap memory
	arr2 = new int*[3];
	arr2[0] = new int[4];
	arr2[1] = new int[4];
	arr2[2] = new int[4];

	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
