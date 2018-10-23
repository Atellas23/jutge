#include <iostream>
using namespace std;

int main () {
    char a;
    cin >> a;
    bool found = false;
    while (not found and a != '.') {
        if (a == 'a') found = true;
        cin >> a;
    }
    if (found) cout << "yes" << endl;
    else cout << "no" << endl;
}
