#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,l=0,j=0;
	string prev,next;
	bool in_order;
	while (cin >> n) {
		in_order = true;
		++l;
		cin >> prev;
		for (int i = 0; i < n - 1; ++i) {
			cin >> next;
			if (next < prev and in_order) {
				in_order = false;
			}
			prev = next;
		}
		if (in_order and j == 0) j = l;
	}
	if (j != 0) cout << "The first line in increasing order is " << j << '.' << endl;
	else cout << "There is no line in increasing order." << endl;
}