#include <iostream>
using namespace std;

//intervals (3)

int max(int a, int b) {
    int m = a;
    if (b > a) m = b;
    return m;
}

int min(int a, int b) {
    int m = a;
    if (b < a) m = b;
    return m;
}

void print(int a, int b, char v, bool empty) {
	cout << v << " , ";
	if (empty) cout << "[]" << endl;
	else cout << "[" << a << "," << b << "]" << endl;
}

int main(){
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	char v = ' ';
	if (a1 == a2 and b1 == b2) v = '=';
	else if (a1 >= a2 and b1 <= b2) v = '1';
	else if (a1 <= a2 and b1 >= b2) v = '2';
	else v = '?';
	if (min(b1,b2) < max(a1, a2)) print(max(a1, a2), min(b1,b2), v, true);
	else print(max(a1, a2), min(b1,b2), v, false);
}
