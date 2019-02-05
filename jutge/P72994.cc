#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
vll fibo(10e5,0);

int f(int n) {
	if (fibo[n] != 0 or n == 0) return fibo[n];
	else return fibo[n] = (f(n-1)+f(n-2))%100000007;
}

int main() {
	fibo[0]=0;
	fibo[1]=1;
	int n;
	while(cin >> n) cout << f(n) << endl;
}
