#include <iostream>
using namespace std;

//Aquesta funció retorna les combinacions de n elements sobre k tries. (recursiva)
int combinacions(int n,int k) {
	if (k == 0) return 1;
	if (n < k) return 0;
	return combinacions(n-1,k-1)+combinacions(n-1,k);
}

int main() {
	int n,k;
	while (cin >> n >> k) cout << combinacions(n,k) << endl;
}
