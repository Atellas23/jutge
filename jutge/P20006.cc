#include <iostream>
using namespace std;

int expr(char c) {
	cin >> c;
	if (c == '0' or c == '1' or c == '2' or c == '3' or c == '4' or c == '5' or c == '6' or c == '7' or c == '8' or c == '9') return c-'0';
	if (c == '+') return expr('a')+expr('b');
	else if (c == '*') return expr('a')*expr('b');
	else if (c == '-') return expr('a')-expr('b');
}

int main() {
	char c;
	cout << expr(c) << endl;
}
