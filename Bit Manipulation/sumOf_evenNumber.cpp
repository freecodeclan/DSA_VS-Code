/*
 	 Find the sum of 'n' even numbers
 */

#include <iostream>
using namespace std;

int main1_2() {
	int n;
	cout << "Enter the value of n: " << endl;
	cin >> n;

	int sum = 0;
	for(int i = 0; i<=n; i=i+2){
		sum += i;
	}

	cout << sum << endl;



	return 0;
}
