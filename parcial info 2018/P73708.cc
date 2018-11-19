#include <iostream>
using namespace std;

int main() {
    int x,y;
    while (cin >> x >> y) {
        int s = 0;
        if (y%x == 0) {
            for (int i = 1; i <= y/x; ++i) {
                if ((y/x)%i == 0) s += i;
            }
        }
        cout << x*s << endl;
    }
}
