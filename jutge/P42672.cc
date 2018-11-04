#include <iostream>
using namespace std;

//Precondició: a > 0 i b > 0 tenen el mateix nombre de bits en base 2.
void mixing_in_base_2(int a, int b) {
	if (a == 0 and b == 0) return;
	mixing_in_base_2(a/2,b/2);
	cout << a%2 << b%2;
}

int main() {
	int a,b;
	while (cin >> a >> b) {
		mixing_in_base_2(a,b);
		cout << endl;
	}
}