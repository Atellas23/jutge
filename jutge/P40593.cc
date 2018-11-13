#include <iostream>
#include <math.h>
using namespace std;

long int tri(long int n) {
    return (n*(n+1))/2;
}

long int mintri(int n) {
    long int r = int((sqrt(1+8*n)-1)/2);
    long int a = tri(r);
    else if (a >= n) return a;
    else return tri(r+1);
}

int main() {
    int n;
    while (cin >> n) {
        cout << mintri(n) << endl;
    }
}
