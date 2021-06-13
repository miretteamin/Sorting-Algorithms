//Time Complexity: O(nlog(n))
//Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void merge(vector<int>& vec, int l, int mid, int r)
{
	vector<int>subVec1(mid - l + 1);
	vector<int>subVec2(r - mid);

	for (int i = 0; i < subVec1.size(); i++)
		subVec1[i] = vec[l + i];
	for (int i = 0; i < subVec2.size(); i++)
		subVec2[i] = vec[mid + i + 1];

	int i(0), j(0), k(l);

	while (i < subVec1.size() && j < subVec2.size()) {
		if (subVec1[i] < subVec2[j])
			vec[k++] = subVec1[i++];
		else
			vec[k++] = subVec2[j++];
	}

	while (i < subVec1.size())
		vec[k++] = subVec1[i++];

	while (j < subVec2.size())
		vec[k++] = subVec2[j++];
}

void mergeSort(vector<int>& vec, int l, int r)
{
	if (l < r) {
		int mid = l + (r - l) / 2;
		mergeSort(vec, l, mid);
		mergeSort(vec, mid + 1, r);
		merge(vec, l, mid, r);
	}
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	mergeSort(vec, 0, vec.size() - 1);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}