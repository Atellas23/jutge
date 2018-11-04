#include <iostream>
using namespace std;

int main() {
	int i,x=0;
	while (cin >> i) {
		int a,c = 0;
		while (cin >> x and x != -1) {
			++c;
			if (c == i) {
				a = x;
			}
		}
		if (i > 0 and i <= c) cout << "At the position " << i << " there is a(n) " << a << "." << endl;
		else cout << "Incorrect position." << endl;
	}
}