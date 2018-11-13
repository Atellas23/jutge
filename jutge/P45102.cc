#include <iostream>
using namespace std;

int read() {
	char c;
	cin >> c;
	if (c >= '0' and c <= '9') return int(c - '0');
	if (c == '(') {
		int x = read();
		char o;
		cin >> o;
		int y = read();
		char p;
		cin >> p;
		if (o == '+') return x + y;
        else if (o == '-') return x - y;
        else if (o == '*') return x * y;
    }
}

int main(){
	cout<< read() <<endl;
}
