#include <iostream>
#include <string>
using namespace std;

int main () {
    string seg,max,tempString = "",first;
    cin >> first;
    max = first;
    while (cin >> seg) {
        if (seg > max) {
            max = seg;
        }
        else if (seg >= tempString and seg < max) {
            tempString = seg;
        }
    }
    if (tempString != "") cout << tempString << endl;
    else cout << first << endl;
}
