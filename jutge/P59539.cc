#include <iostream>
using namespace std;

//escriu l'n-èssim nombre harmònic (1 + 1/2 + 1/3 + 1/4 + ...)

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	double n,z;
	z = 0;
	cin >> n;
    for (int i = 1; i <= n; ++i) z += 1.0/i;
	cout << z << endl;
}
