#include <iostream>
using namespace std;

//reversed number in hexadecimal

void base16(int n){
	if (n % 16 > 9){
		cout << char('A' + n % 16 - 10);
	} else {
		cout << n % 16;
	}
	if(n / 16 >= 1){
		base16(int(n / 16));
	}
}

int main () {
	int n;
	while (cin >> n) {
		base16(n);
		cout << endl;
	}
}
