#include <iostream>
using namespace std;

//max des del final = total - (min des del principi).

int main() {
	int n,x;
	while (cin >> n) {
        if (n == 0) {
            cout << 0 << ' ' << 0 << endl;
        }
        else {
            int total = 0,m=0,M=0;
            cin >> x;
            total += x;
            if (total > M) M = total;
            else if (total < m) m = total;
            for (int i = 1; i < n; ++i) {
                cin >> x;
                total += x;
                if (total > M) M = total;
                else if (total < m) m = total;
            }
            cout << M << ' ' << total-m << endl;
        }
	}
}
