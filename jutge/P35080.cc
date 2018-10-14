#include <iostream>
using namespace std;

void printsq(int n) {
    bool first = true;
    for (int k = 0; k < n; ++k) {
        if (first) first = false;
        else cout << endl;
        int c = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                    cout << c % 10;
                    ++c;
            }
            cout << endl;
        }
    }
}

int main() {
	int n;
    cin >> n;
    printsq(n);
}
