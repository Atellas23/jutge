#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	bool found1 = false, found2 = false;
	int k = 0;
	while (cin >> a and not found2) {
		if (a == "beginning") {
			found1 = true;
		}
		else if (a == "end") {
			found2 = true;
		}
		else if (not found2 and found1) {
			++k;
		}
	}
	if (found1 and found2) cout << k << endl;
	else cout << "wrong sequence" << endl;
}