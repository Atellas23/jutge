#include <iostream>
using namespace std;

bool is_perfect(int x) {
    if (x <= 1 or x % 2) return false;
    int s = 1;
    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0) s += i + x/i;
        if (i*i == x) s -= i;
    }
    if (s == x) return true;
    return false;
}

int main () {
    int x;
    while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}
