//T.C:O(n^2) 

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& vec)
{
	int temp;
	for (int i = 1; i < vec.size(); i++) {
		temp = vec[i];
		int j = i;
		while (j >= 1 && vec[j - 1] > temp) {
			vec[j] = vec[j - 1];
			j--;
		}
		vec[j] = temp;
	}
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	insertionSort(vec);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}