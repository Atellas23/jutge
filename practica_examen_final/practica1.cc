#include <iostream>
using namespace std;

//Aquesta funció retorna si un enter n >= 0 és múltiple d'11.
bool multiple_11(int n) {
	if (n/10 == 0) return n == 0;
	int temp = n;
	int number_of_digits = 0;
	while (temp != 0) {
		++number_of_digits;
		temp /= 10;
	}
	int s = 0;
	for (int i = 0; i < number_of_digits; ++i) {
		if ((number_of_digits-i)%2 == 1) s -= n%10;
		else s += n%10;
		n /= 10;
	}
	return multiple_11(s);
}

int main() {
	int n;
	while (cin >> n) {
		if (multiple_11(n)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
