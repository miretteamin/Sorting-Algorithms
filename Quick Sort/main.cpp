//Time Complexity O(n^2)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(vector<int>& vec, int low, int high)
{
	int pivot = vec[low];
	int i = low;
	for (int j = low + 1; j <= high; j++) {
		if (vec[j] < pivot) {
			i++;
			swap(&vec[i], &vec[j]);
		}
	}
	swap(&vec[i],&vec[low]);
	return i;
}

void quickSort(vector<int>& vec, int low, int high)
{
	if (low < high) {
		int middlePivotIdx = partition(vec, low, high);
		quickSort(vec, low, middlePivotIdx - 1);
		quickSort(vec, middlePivotIdx + 1, high);
	}
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	quickSort(vec, 0, vec.size() - 1);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}