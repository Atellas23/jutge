#include <iostream>
using namespace std;


bool three_equal_consecutive_digits(int n, int b) {
    if (n > 0) {
        if (n%b == (n/b)%b) {
            if ((n/b)%b == ((n/b)/b)%b) return true;
            else return three_equal_consecutive_digits(n/b,b);
        }
        else return three_equal_consecutive_digits(n/b,b);
    }
    else return false;
}


int main() {
  int n, b;
  while (cin >> n >> b)
    cout << n << ' ' << b << ' ' << three_equal_consecutive_digits(n, b) << endl;
}
