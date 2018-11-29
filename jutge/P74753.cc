#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers(46);
	numbers[0] = -3;
	numbers[1] = -1;
	numbers[2] = 4;
	numbers[3] = 8;
	numbers[4] = 15;
	for (int i = 5; i < 46; ++i) numbers[i] = numbers[i-5]+numbers[i-3]+numbers[i-1];
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) cout << numbers[i] << " ";
        cout << "..." << endl;
    }
}
