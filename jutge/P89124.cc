#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    for (int d = 2; d*d <= n; ++d) if (n%d == 0) return false;
    return true;
}

void sieve(int n) {
    if (isprime(n)) cout << n << " is prime" << endl;
    else cout << n << " is not prime" << endl;
}

int main() {
    int n;
    while (cin >> n) sieve(n);
}
