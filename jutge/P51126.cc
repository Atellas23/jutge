#include <iostream>
using namespace std;

//intervals (1)

int min(int a, int b) {
    int m = a;
    if (b < a) m = b;
    return m;
}

int max(int a, int b) {
    int m = a;
    if (b > a) m = b;
    return m;
}

void print(int a, int b, bool empty) {
	if (empty) cout << "[]" << endl;
	else cout << "[" << a << "," << b << "]" << endl;
}

int main(){
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int fi = min(b1,b2), inici = max(a1, a2);
	if (fi < inici) print(0, 0, true);
	else print(inici, fi, false);
}
