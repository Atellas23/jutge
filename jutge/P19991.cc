#include <iostream>
using namespace std;

int main() {
	int a,s = 0;
    char d;
	cin >> a;
	for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            cin >> d;
            if (i == j) s += d - '0';
            else if (i + j == a - 1) s += d - '0';
        }
    }
    cout << s << endl;
}
