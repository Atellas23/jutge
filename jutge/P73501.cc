#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned int a,anterior;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        unsigned int counter = 0;
        cin >> a;
        anterior = a;
        while (anterior != 0) {
            cin >> a;
            if (a > anterior) ++counter;
            anterior = a;
        }
        cout << counter << endl;
    }
}
