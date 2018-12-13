#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    for (int d = 2; d*d <= n; ++d) if (n%d == 0) return false;
    return true;
}

void divisors(int n) {
    int copy = n;
    int d;
    for (d = 2; d*d <= n; ++d) if (n%d == 0) cout << ' ' << d;
}

int main() {
    int n;
    while (cin >> n) {
        cout << "divisors of " << n << ":";
        divisors(n);
        cout << endl;
    }
}
