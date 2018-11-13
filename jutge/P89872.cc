#include <iostream>
#include <string>
using namespace std;

string minimum(string a, string b) {
	if (b < a) return b;
	return a;
}

int main() {
	string seg,max="",max2="";
    while (cin >> seg){
        if (seg < max and seg > max2) max2 = seg;
        else if (seg > max) {
            max2 = max;
            max = seg;
        }
    }
    cout << max2 << endl;
}
