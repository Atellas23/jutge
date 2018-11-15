#include <iostream>
#include <math.h>
using namespace std;

int tri(int n) {
    return (n*(n+1))/2;
}

int mintri(int n) {
    int r = int((sqrt(1+8*n)-1)/2);
    int a = tri(r);
    if (a >= n) return a;
    else return tri(r+1);
}

int main() {
    int n;
    while (cin >> n) {
        cout << mintri(n) << endl;
    }
}
