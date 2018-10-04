#include <iostream>
using namespace std;

//escriu els primers n cubs

int cub(int n) {
    return n*n*n;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cout << cub(i) << ",";
    cout << cub(n) << endl;
}
