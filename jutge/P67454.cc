#include <iostream>
using namespace std;

int main() {
	char c;
	int k = 0;
	while(cin >> c and c != '.') {
		if (c == 'a') ++k;
	}
	cout << k << endl;
}