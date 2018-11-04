#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
	int z = b;
	b = a;
	a = z;
}

void sort3(int& a, int& b, int& c) {
	if (a >= b) {
		swap2(a,b);
	}
	if (a >= c) {
		swap2(a,c);
	}
	if (b >= c) {
		swap2(b,c);
	}
}

int main() {
	int a,b,c;
	while (cin >> a >> b >> c) {
		sort3(a,b,c);
		cout << a << " " << b << " " << c << endl;
	}
}