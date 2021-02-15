#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int temp, j;
	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array:\n";
	printArray(arr, n);
	insertionSort(arr, n);
	cout << "Sorted array:\n";
	printArray(arr, n);

	return 0;
}