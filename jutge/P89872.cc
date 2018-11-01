#include <iostream>
#include <string>
using namespace std;

string minimum(string a, string b) {
	if (b < a) return b;
	return a;
}

int main() {
    string seg,max="",max2;
	cin >> max2;
    while (cin >> seg) {
        if (seg > max and seg != max2) {
            max = seg;
        }
		else if (seg > max2 and seg < max) {
			max2 = seg;
		}
    }
    if (max2 != "") cout << minimum(max2,max) << endl;
	else cout << max << endl;
}