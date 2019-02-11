#include <iostream>
using namespace std;

//Aquesta funció retorna el nombre de factors primers que té un enter n en la seva descomposició en factors primers. (recursiva)
int nf(int n,int d) {
	if (n == 1) return 0;
	if (d*d > n) return 1;
	if (n%d == 0) return 1+nf(n/d,d);
	return nf(n,++d);
}

int numFactors(int n) {
	return nf(n,2);
}

int main() {
	int n;
	while (cin >> n) cout << numFactors(n) << endl;
}

