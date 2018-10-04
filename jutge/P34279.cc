#include <iostream>
using namespace std;

void hola (int n) {
    int h,m,s;
    h = n / 3600;
    m = (n - h*3600) / 60;
    s = n % 60;
    if(h>=10){
        if (h == 24) cout << "00:";
        else cout << h << ":";
    }
    else {
        cout << 0 << h << ":";
    }
    if(m>=10){
        cout << m << ":";
    }
    else{
        cout << 0 << m << ":";
    }
    if(s>=10){
        cout << s;
    }
    else{
        cout << 0 << s;
    }
    cout << endl;
}

int main () {
    int h,m,s;
    cin >> h >> m >> s;
    s += h*3600 + 60*m + 1;
    hola(s);
}
