#include <iostream>
using namespace std;

bool has_a() {
    char c;
    while (cin >> c) {
        if (c == 'a') return true;
    }
    return false;
}

int main () {
    if (has_a()) cout << "yes" << endl;
    else cout << "no" << endl;
}
