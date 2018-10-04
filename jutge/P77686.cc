#include <iostream>
using namespace std;

int power(int n, int k) {
    int aux = 1;
    if (k == 0) {}
    else {
        for (int i = 0; i < k; ++i) aux *= n;
    }
    return aux;
}

int number_of_digits(int n) {
    int c = 0;
    do {
        ++c;
        n /= 10;
    } while (n != 0);
    return c;
}

int reverse(int n) {
    if (n / 10 == 0) return n;
    else {
        int y = 0, o = number_of_digits(n);
        for (int i = 1; i <= o; ++i) {
            y += (n % 10) * power(10,o-i);
            n /= 10;
        }
        return y;
    }
}

bool is_palindromic(int n) {
    if (reverse(n) == n) return true;
    return false;
}

int main () {
    int n;
    cin >> n;
    if (is_palindromic(n)) cout << "true" << endl;
    else cout << "false" << endl; 
}
