#include <iostream>
using namespace std;

void printsq(int n, bool first, int& c) {
    if (!first) cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
                cout << c % 10;
                ++c;
        }
        cout << endl;
    }
}

int main() {
	int n,c = 0;
    bool first = true;
    while (cin >> n) {
        printsq(n, first, c);
        if (first) first = false;
    }
}
