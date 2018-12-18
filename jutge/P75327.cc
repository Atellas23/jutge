#include <iostream>
#include <cmath>
using namespace std;
typedef long long ln;

int main() {
    long long n;
    cin >> n;
    ln part_entera = int((-1+sqrt(1+8*n))/2);
    cout << part_entera << endl;
}
