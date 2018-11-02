#include <iostream>
using namespace std;

int main() {
	char c;
	int i = 0;
	bool found = false;
	while (not found and cin >> c and c != '.') {
		if (i == 0 and c == 'h') ++i;
		else if (i == 1) {
			if (c == 'e') ++i;
			else if (c == 'h') i = 1;
			else i = 0;
		}
		else if (i == 2 or i == 3){
			if (c == 'l') ++i;
			else if (c == 'h') i = 1;
			else i = 0;
		}
		else if (i == 4) {
			if (c == 'o') found = true;
			else if (c == 'h') i = 1;
			else i = 0;
		}
	}
	if (found) cout << "hello" << endl;
	else cout << "bye" << endl;
}