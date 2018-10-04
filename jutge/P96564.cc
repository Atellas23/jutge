#include <iostream>
using namespace std;

int gcd(int a, int b){int r;while(b!=0){r=a%b;a=b;b=r;}return a;}

long int lcm(long int a, long int b) {
    return a * b / gcd(a,b);
}

int main () {
    int n=1;
    long int aux=1,x;
    while (n != 0) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            aux = lcm(x,aux);
        }
        if (n == 0);
        else {
            cout << aux << endl;
            aux = 1;
        }
    }
}
