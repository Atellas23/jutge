#include <iostream>
using namespace std;

int main() {
	char c;
	int i = 0;
	string cosa = "hello";
	bool found = false;
	while (not found and cin >> c and c != '.') {
		if (c == cosa[i]) {
			++i;
		}
		else {
			i = 0;
		}
		if (i == 4) found = true;
	}
	if (found) cout << cosa << endl;
	else cout << "bye" << endl;
}