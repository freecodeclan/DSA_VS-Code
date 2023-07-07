/*
	Find the Product and Sum of the given number and the final result.
 */

#include <iostream>
using namespace std;

int main1_5() {
	int n;
	cout << "Enter the number: " ;
	cin >> n;

	int product = 1;
	int sum = 0;

	while(n != 0){
		int digit = n % 10;
		product = product * digit;
		sum = sum + digit;

		n = n/10;
	}
	int answer = product - sum;

	cout << answer << endl;
	return 0;
}
