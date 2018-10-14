#include <iostream>
using namespace std;

void expr(char a, char c) {
    cin >> a;
    if (c == '+' or c == '*' or c == '-') {
        expr('',a)
    }
    else {
        
    }
}

int main() {
    char c;
    cin >> c;
    expr('',c);
}
