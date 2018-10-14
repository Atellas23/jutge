#include <iostream>
using namespace std;

int main() {
	int a,b,s = 0;
    char d;
	cin >> a >> b;
	for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> d;
            if (i % 2 == j % 2) s += d - '0';
        }
    }
    cout << s << endl;
}
