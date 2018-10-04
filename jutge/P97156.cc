#include <iostream>
using namespace std;

//escriu els nombres des de a a b

int main() {
	int a,b;
    cin >> a >> b;
    if (a <= b) {
        for (int i = a; i < b; ++i) cout << i << ",";
        cout << b << endl;
    }
    else cout << endl;
}
