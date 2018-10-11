#include <iostream>
#include <string>
using namespace std;

const double pi = 3.14159265358979323846;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	int n;
	cin >> n;
	string type;
	double s1, s2, r;
	for (int i = 0; i < n; ++i) {
		cin >> type;
		if (type == "rectangle") {
			cin >> s1 >> s2;
			cout << s1*s2<< endl;
		}
		else if (type == "circle") {
			cin >> r;
			cout << pi*r*r << endl;
		}
	}
}