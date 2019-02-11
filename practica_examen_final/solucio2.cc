#include <iostream>
using namespace std;

int combinacions(int n,int k) {
	if (k == 0) return 1;
	return combinacions(n-1,k-1)*n/k;
}

int main() {
	int n,k;
	while (cin >> n >> k) cout << combinacions(n,k) << endl;
}
