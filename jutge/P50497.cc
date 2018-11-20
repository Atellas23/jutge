#include <iostream>
#include <string>
using namespace std;

void swap(char& a,char& b) {
    char c = a;
    a = b;
    b = c;
}

string reversestring(const string& s) {
    string r = s;
    for (int i = 0; i < r.length()/2; ++i) swap(r[i],r[r.length()-1-i]);
    return r;
}

bool is_palindrome(const string& s) {
    return reversestring(s) == s;
}


int main() {
    string s;
    while (cin >> s) {
        cout << is_palindrome(s) << endl;
    }
}
