#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int a,b,k;
	while (cin >> a >> b >> k) {
		double s = 0;
		for (int i = 0; a + i * k <= b; ++i) {
			s += double(1)/(a+i*k);
		}
		cout << s << endl;
	}
}