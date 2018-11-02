#include <iostream>
using namespace std;

void min_max(int a, int b, int& mn, int& mx) {
	if (a < b) {
		mn = a;
		mx = b;
	}
	else {
		mn = b;
		mx = a;
	}
}

int main() {
	int a,b,mn,mx;
	while (cin >> a >> b) {
		min_max(a,b,mn,mx);
		cout << "Minimum value is " << mn << ", and maximum value is " << mx << "." << endl;
	}
}
