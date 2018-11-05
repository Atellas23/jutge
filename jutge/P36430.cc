#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	bool found = false;
	for (int i = a; not found and i <= b; ++i) {
		for (int j = c; not found and j <= d; ++j) {
			double n = sqrt(i*i + j*j);
			int num = int(n);
			if (n == double(num)) {
				cout << i << "^2 + " << j << "^2 = " << num << "^2" << endl;
				found = true;
			}
		}
	}
	if (not found) {
		cout << "No solution!" << endl;
	}
}