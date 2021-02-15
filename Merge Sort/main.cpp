//Time Complexity: O(nlog(n))
//Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void merge(int a[], int l, int m, int r)
{
	int n1 = m - l + 1, n2 = r - m;
	int* L = new int[n1];
	int* R = new int[n2];

	for (int i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (int i = 0; i < n2; i++)
		R[i] = a[m + 1 + i];

	int i = 0, j = 0, k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of
	// L[], if there are any
	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of
	// R[], if there are any
	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);

	return 0;
}