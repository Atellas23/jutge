#include <iostream>
using namespace std;

int proddig(int n) {
    int c = 1;
    do {
        c *= n%10;
        n /= 10;
    } while (n != 0);
    return c;
}

int number_of_digits(int n) {
    int c = 0;
    do {
        ++c;
        n /= 10;
    } while (n != 0);
    return c;
}

int main() {
	int n;
    while (cin >> n) {
        do {
            cout << "The product of the digits of " << n << " is " << proddig(n) << "." << endl;
            n = proddig(n);
        } while (number_of_digits(n) != 1);
        cout << "----------" << endl;
    }
}
