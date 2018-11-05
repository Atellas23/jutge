#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int a,b,c,d;
	while (cin >> a >> b >> c >> d) {
		int k = 0;
		for (int i = a; i <= b; ++i) {
			for (int j = c; j <= d; ++j) {
				double n = sqrt(i*i + j*j);
				int num = int(n);
				if (n == double(num)) {
					++k;
				}
			}
		}
		cout << k << endl;
	}
	
}