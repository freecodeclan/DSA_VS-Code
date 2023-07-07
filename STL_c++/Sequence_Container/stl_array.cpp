#include <iostream>
#include <array>
using namespace std;

int main111(){
	array <int,4> a = {1,2,3,4};   // Declaring and initialization STL_Array.

	int size = a.size();  // Used to find the size of an array

	for(int i=0; i<size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	cout << endl;


	// Accessing Index values
	cout << "Element at Index 2 is " << a.at(2) << endl;
	cout << endl;
	cout << "Array is Empty or not " << a.empty() << " . Its empty" << endl;
	cout << endl;
	cout << "The first element of an array is " << a.front() << endl;
	cout << endl;
	cout << "The last element of an array is " << a.back() << endl;

	return 0 ;

}
