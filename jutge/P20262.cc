#include <iostream>
using namespace std;

//EN PROCÉS

int main() {
	int n,x;
	while (cin >> n) {
		int sdmax = 0,parciald = 0,parciale = 0,semax = 0;
		for (int i = 0; i < n; ++i) {
			cin >> x;
			parciald += x;
			if (parciald > sdmax) sdmax = parciald;
		}
	}
}