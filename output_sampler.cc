#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	srand(1000000);
	for (int i = 0; i < 999999; ++i) cout << int(rand()) << ' ';
	cout << int(rand) << endl;
}
