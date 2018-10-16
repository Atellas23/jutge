#include <iostream>
using namespace std;

int expr(char c, int acc) {
	cin >> c;
	if (c == '(') { //if operation is open parenthesis
		return expr('(',acc);
	}
	if (c == '0' or c == '1' or c == '2' or c == '3' or c == '4' or c == '5' or c == '6' or c == '7' or c == '8' or c == '9') return expr('(',c-'0');
	if (c == '+') return acc+expr('b',acc);
	else if (c == '*') return acc*expr('b',acc);
	else if (c == '-') return acc-expr('b',acc);
}

int main() {
	cout << expr('.',0) << endl;
}
