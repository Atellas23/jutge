#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v,int left,int mid,int right) {
	int n = right - left +1;
	vector<int> aux(n);
	int i = left;
	int j = mid + 1;
	int k = 0;
	while (i <= mid and j <= right) {
		if (v[i] <= v[j]) {
			aux[k] = v[i];
			++i;
		}
		else {
			aux[k] = v[j];
			++j;
		}
		++k;
	}
	while (i <= mid) {
		aux[k] = v[i];
		++k;
		++i;
	}
	while (j <= right) {
		aux[k] = v[j];
		++k;
		++j;
	}
	for (k = 0; k < n; ++k) v[left+k] = aux[k];
}

void merge_sort(vector<int>&v, int left, int right) {
	if (left < right) {
		int m = (left+right)/2;
		merge_sort(v,left,m);
		merge_sort(v,m+1,right);
		merge(v,left,m,right);
	}
}

int main() {
	int m;
	vector<int> v;
	while (cin >> m) v.push_back(m);
	merge_sort(v,0,v.size()-1);
	for (int i = 0; i < v.size()-1; ++i) cout << v[i] << ' ';
	cout << v[v.size()-1] << endl;
}
