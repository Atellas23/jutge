#include <iostream>
using namespace std;


int number_of_digits(int n) {
    if (n/10 == 0) return 1;
    else return 1 + number_of_digits(n/10);
}

bool is_increasing(int n) {
    if (number_of_digits(n) <= 2) {
        if (n % 10 >= (n / 10) % 10) return true;
        else return false;
    }
    else  {
        if (n % 10 >= (n / 10) % 10) return is_increasing(n/10);
        else return false;
    }
}


int main() {
    int n;
    while (cin >> n) cout << (is_increasing(n) ? "true" : "false") << endl;
}
