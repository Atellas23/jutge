#include <iostream>
using namespace std;

int fevenpos() {
    int n,c = 0;
    while (cin >> n) {
        ++c;
        if (n % 2 == 0) return c;
    }
}

int main () {
    cout << fevenpos() << endl;
}
