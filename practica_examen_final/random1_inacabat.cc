#include <iostream>
#include <vector>
using namespace std;

void cercarSegment(const vector<int>& v,int& i,int& j) {
	if (v.size() == 1) {
		i = j = -1;
		return;
	}
	i = v.size()/2;
	j = i;
	int S = v[i];
	int s1 = 0;
	for (int k = 0; k < i; ++k) s1 += v[k];
	int s2 = 0;
	for (int k = j+1; k < v.size(); ++k) s2 += v[k];
	while (i > 0 and j < v.size() and i <= j) {
		if (s1 <= s2) {
			++i;
			S -= v[i];
			s1 += v[i];
		}
		else if (s2 <= S) {
			--j;
			S -= v[j];
			s2 += v[j];
		}
		else {
			--i;
			++j;
			S += v[i]+v[j];
			s1 -= v[i];
			s2 -= v[j];
		}
	}
}

int main() {
	int n;
	vector<int> v;
	while (cin >> n) v.push_back(n);
	int i,j;
	cercarSegment(v,i,j);
	cout << i << ' ' << j << endl;
}
