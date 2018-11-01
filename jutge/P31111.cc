#include <iostream>
using namespace std;

int main() {
	char c;
	int k = 0;
	while (cin >> c) {
		if (k < 0) break;
		if (c == '(') ++k;
		else if (c == ')') --k;
	}
	if (k != 0 or c == '(') cout << "no" << endl;
	else cout << "yes" << endl;
}