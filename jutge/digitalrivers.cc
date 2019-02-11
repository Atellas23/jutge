#include <iostream>
#include <vector>
using namespace std;

void escriu(vector<int>& v) {
	cout << v[0];
	for (int i = 1; i < v.size(); ++i) cout << ' ' << v[i];
	cout << endl;
}

int sum_of_digits(int n) {
	if (n/10 == 0) return n;
	return n%10+sum_of_digits(n/10);
}

bool river_9(int n) {
	if (n/10 == 0) return n == 9;
	return river_9(sum_of_digits(n));
}

bool river_3(int n) {
	if (n/10 == 0) return n == 3 or n == 6;
	return river_3(sum_of_digits(n));
}

void create_river(vector<int>& river,int k) {
	river[0] = k;
	for (int i = 1; i < river.size(); ++i) river[i] = river[i-1]+sum_of_digits(river[i-1]);
}

int search(vector<int>& r1, vector<int>& r2) {
	int i,j;
	i = j = 0;
	while (r1[i] != r2[j]) {
		if (r1[i] > r2[j]) ++j;
		else ++i;
	}
	return r1[i];
}

int encounter_of_rivers(int n) {
	if (river_3(n)) return n;
	else if (river_9(n)) return n;
	else {
		vector<int> r1(10000);
		create_river(r1,1);
		vector<int> r2(10000);
		create_river(r2,n);
		return search(r1,r2);
	}
}

int main() {
	int n;
	while (cin >> n) cout << encounter_of_rivers(n) << endl;
}
