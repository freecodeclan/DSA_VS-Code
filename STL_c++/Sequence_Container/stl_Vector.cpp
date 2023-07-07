#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> v;
	cout << "size of vector " <<  v.capacity() << endl;
	cout << endl;

	cout << "Capacity of vector is  " << v.capacity() << endl;

	cout << endl;

	v.push_back(1);
	cout << "Capacity of vector is  " << v.capacity() << endl;
	v.push_back(2);
	cout << "Capacity of vector is  " << v.capacity() << endl;
	v.push_back(3);
	cout << "Capacity of vector is  " << v.capacity() << endl;
	cout << endl;
	cout << "The size of an array is " << v.size() << endl;
	cout << endl;
	cout << "The value at index " << v.at(1) << endl;
	cout << endl;
	v.pop_back();
	for(int i:v){
		cout << i << " ";
	}
	v.begin();
	for(int i:v){
		cout << i << " ";
	}



}
