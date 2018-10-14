#include <iostream>
using namespace std;

//number of digits

int main () {
    cout.setf(ios::fixed);
	cout.precision(2);
	int c = 0;
    double n,t = 0;
    while (cin >> n) {
        c += 1;
        t += n;
    }
    double m = t/c;
    cout << m << endl;
}
