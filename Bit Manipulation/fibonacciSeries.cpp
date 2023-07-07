#include <iostream>
using namespace std;

int main1_3() {
	int n;
	cout << "Enter the value of n: " << endl;
	cin >> n;

	int a = 0;
	int b = 1;
	cout << a << " " << b << " ";

	for(int i=1; i<=n; i++){
		int sum = a+b;
		cout << sum << " ";

		a = b;
		b = sum;

	}

	return 0;
}
