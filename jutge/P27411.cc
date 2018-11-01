#include <iostream>
using namespace std;

int main() {
	int i,x=0,c=0,a;
	cin >> i;
	bool found = false;
	while (not found and cin >> x and x != -1) {
		++c;
		if (c == i) {
			a = x;
			found = true;
		}
	}
	if (i > 0 and i <= c)	cout << "At the position " << i << " there is a(n) " << a << "." << endl;
	else cout << "Incorrect position." << endl;
}
