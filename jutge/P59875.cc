#include <iostream>
using namespace std;

//escriu els nombres des de y fins a x (o entre x i y), de dalt a baix

int main() {
	int x,y;
    cin >> x >> y;
    int max = x;
    if (y > x) max = y;
    int min = x;
    if (y < x) min = y;
    for (int i = max; i >= min; --i) cout << i << endl;
}
