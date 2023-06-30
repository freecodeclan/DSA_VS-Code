/* Find pivot in an array */
#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s)/2;

	while(s < e){
		if(arr[mid] > arr[0]){
			s = mid + 1;
		}
		else{
			e = mid;
		}
		mid = s + (e - s)/2;
	}
	return e;
}
int main04() {

	int Ar[6] = {3,8,10,15,1,2};

	cout << "THe pivot is at Index " << getPivot(Ar, 6);


	return 0;
}
