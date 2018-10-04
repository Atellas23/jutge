#include <iostream>
using namespace std;

//maximum of three int (can be equal)

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if (y >= x) x = y;
    if (z >= x) x = z;
    cout << x << endl;
}