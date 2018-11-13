#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    a += b;
    b = a - b;
    a -= b;
}

int main() {
	int a,b;
	cin >> a >> b;
	swap2(a,b);
	cout << a << " " << b << endl;
}
