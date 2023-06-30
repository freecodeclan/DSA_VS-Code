#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
	int ans = 0;
	for(int i=0; i<size;i++){
		ans = ans^arr[i];   // We'll XOR the value of ans with the elements of an array
	}
	return ans;
}

int main7() {
	int arr[5] = {-1, 5, 2, 5,-1};

	int uniqueValue = findUnique(arr,5);

	cout << "The unique value from an array is " << uniqueValue << endl;

	return 0;


}
