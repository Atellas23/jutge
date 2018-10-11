#include <iostream>
using namespace std;

//canvia l'ordre de l'and

bool isPrime (int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int sum_of_digits(int n) {
    if (n/10 == 0) return n;
    else return (n%10) + sum_of_digits(n/10);
}


bool is_perfect_prime(int n) {
    if (n/10 == 0) {
        return isPrime(n);
    }
    return (is_perfect_prime(sum_of_digits(n)) and isPrime(n));
}


int main() {
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
