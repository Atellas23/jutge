#include <iostream>
using namespace std;

void fevenpos() {
    int n,c = 0;
    bool found = false;
    while (not found and cin >> n) {
        ++c;
        if (n % 2 == 0) found = true;
    }
    cout << c << endl;
}

int main () {
    fevenpos();
}
