/* Find the number of 1 bits into the binary representation */
#include <iostream>
using namespace std;

int main1_6() {
	int n;
	cout << "Enter the number in binary term: ";
	cin >> n;

	int count = 0;
	while(n != 0){
		if(n&1){ 	// Checking last bit is 1
			count ++;
		}
		n = n>>1; // If the last bit is 1 then we right shift n by 1
	}
	cout << count << endl;

	return 0;
}
