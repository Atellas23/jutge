#include <iostream>
using namespace std;

//Calcula el nombre de dígits de n.
int number_of_digits(int n) {
	if (n/10 == 0) return 1;
	return 1+number_of_digits(n/10);
}

//Calcula la suma dels dígits de n comptant amb l'últim (sense desplaçament).
int sum_odd(int n) {
	int s = 0;
	while (n != 0) {
		s += n%10;
		n /= 100;
	}
	return s;
}

//Calcula la suma dels dígits de n sense comptar amb l'últim, amb un desplaçament d'una xifra.
int sum_even(int n) {
	int s = 0;
	n /= 10;
	while (n != 0) {
		s += n%10;
		n /= 100;
	}
	return s;
}

/*Suggeriment:
Es podria generalitzar el procediment, de k xifres en k xifres, amb un
paràmetre que comptés amb això i eliminant les primeres i,...,k-1 xifres.
*/

bool is_balanced(int n) {
	return sum_odd(n) == sum_even(n);
}

int main() {
	int n;
	while (cin >> n) {
		cout << "Sum of odd digits is " << sum_odd(n) << endl << "Sum of even digits is " << sum_even(n) << endl << is_balanced(n) << endl;
	}
}