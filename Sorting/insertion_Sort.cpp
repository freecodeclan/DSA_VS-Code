#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			swap(arr[j - 1], arr[j]);
			j--;
		}
	}
}

int main()
{
	int n;
	cout << "Enter the size of an array: ";
	cin >> n;
	int arr[n];

	cout << endl;

	cout << "Enter the elements of an array " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	insertionSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
