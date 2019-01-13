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
		++k; ++i;
	}
	while (j <= right) {
		aux[k] = v[j];
		++k; ++j;
	}
	for (k = 0; k < n; ++k) v[left+k] = aux[k];
}

void merge_sort(vector<int>&v,int left,int right) {
    if (left < right) {
		int m = (left+right)/2;
		merge_sort(v,left,m);
		merge_sort(v,m+1,right);
		merge(v,left,m,right);
	}
}

void mergesort(vector<int>&v) {
    int l = 0,r = v.size() - 1;
    merge_sort(v,l,r);	
}

int main() {
	int n,m;
	while (cin >> m) {
		vector<int> numbers;
		numbers.push_back(m);
		while(cin >> n and n != 0) numbers.push_back(n);
		mergesort(numbers);
		for (int i = 0; i < numbers.size(); ++i) {
			if (numbers[i]%2 == 0) cout << numbers[i] << ' ';
		}
		cout << endl;
		bool first = true;
		for (int j = numbers.size()-1; j > -1; --j) {
			if (numbers[j]%2 == 1) {
				if (first) {
					cout << numbers[j];
					first = false;
				}
				else cout << ' ' << numbers[j];
			}
		}
		cout << endl;
	}
}
