#include <iostream>
using namespace std;

//number of digits

int main () {
	int n;
    cin >> n;
    int k = n;
    int c = 0;
    while (n / 10 != 0) {
        c += 1;
        n /= 10;
    }
    c += 1;
    cout << "The number of digits of " << k << " is " << c << "." << endl;
}
