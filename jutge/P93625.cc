#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
vvll mat(31,vll(31,0));

int comb(int n,int k) {
	if (k < 0 or n < 0) return 0;
	if (k == n) return 1;
	if (mat[n][k] != 0) return mat[n][k];
	return mat[n][k] = comb(n-1,k-1)+comb(n-1,k);
}

int main() {
	mat[0][0] = 1;
	int n,k;
	while (cin >> n >> k) cout << comb(n,k) << endl;
}
