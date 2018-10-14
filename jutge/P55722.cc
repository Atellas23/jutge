#include <iostream>
using namespace std;

int number_of_digits(int n) {
    int c = 0;
    do {
        ++c;
        n /= 10;
    } while (n != 0);
    return c;
}

int main () {
    int n;
    cin >> n;
    cout << number_of_digits(n) << endl;
}
