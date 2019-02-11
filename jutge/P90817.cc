#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int a1,b1,c1,a2,b2,c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	if (-a1/b1 == -a2/b2) {
		if (c1/b1 == c2/b2) cout << "La interseccio es una recta." << endl;
		else cout << "No hi ha interseccio." << endl;
	}
	else cout << double(b2*c1-b1*c2)/(b2*a1-b1*a2) << " " << double(a2*c1-a1*c2)/(a2*b1-a1*b2) << endl;
}
