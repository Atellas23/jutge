#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n/10 == 0) return n;
    return (n%10)+sum_of_digits(n/10);
}


int reduction_of_digits(int n) {
    if (n/10 == 0) return n;
    else return reduction_of_digits(sum_of_digits(n));
}


int main() {
  int n;
  while (cin >> n) {
    cout << reduction_of_digits(n) << endl;
  }
}
