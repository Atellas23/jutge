#include <iostream>
using namespace std;

int main() {
	int a,b,s = 0;
    char d;
	cin >> a >> b;
	for (int i = 0; i < a * b; ++i) {
        cin >> d;
        s += d - '0';
    }
    cout << s << endl;
}
