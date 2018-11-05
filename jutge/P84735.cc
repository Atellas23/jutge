#include <iostream>
using namespace std;

//Precondition: a,b natural numbers.
//Returns the smallest multiple of b above a.
int min_mult(int a, int b) {
	int k;
	if (a%b == 0) k = a;
	else k = (a/b)*b+b;
	return k;
}

int main() {
	int a,b,i=0;
	while (cin >> a >> b) {
		++i;
		cout << '#' << i << " : " << min_mult(a,b) << endl;
	}
}