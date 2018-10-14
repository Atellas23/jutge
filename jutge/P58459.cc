#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) return true;
        else return false;
    }
    else if (year % 4 == 0) return true;
    return false;
}


bool is_valid_date(int d, int m, int a) {
    if (a >= 1800 and a <= 9999) {
        if (is_leap_year(a)) {
            if (m == 2) {
                if (d >= 1 and d <= 29) return true;
                return false;
            } else if (m >= 1 and m <= 7) {
                if (m%2) {
                    if (d >= 1 and d <= 31) return true;
                    return false;
                } else {
                    if (d >= 1 and d <= 30) return true;
                    return false;
                }
            } else if (m >= 8 and m <= 12) {
                if (m%2) {
                    if (d >= 1 and d <= 30) return true;
                    return false;
                } else {
                    if (d >= 1 and d <= 31) return true;
                    return false;
                }
            }
            return false;
        } else {
            if (m == 2) {
                if (d >= 1 and d <= 28) return true;
                return false;
            } else if (m >= 1 and m <= 7) {
                if (m%2) {
                    if (d >= 1 and d <= 31) return true;
                    return false;
                } else {
                    if (d >= 1 and d <= 30) return true;
                    return false;
                }
            } else if (m >= 8 and m <= 12) {
                if (m%2) {
                    if (d >= 1 and d <= 30) return true;
                    return false;
                } else {
                    if (d >= 1 and d <= 31) return true;
                    return false;
                }
            }
            return false;
        }
    }
    return false;
}


int main() {
    int d, m, a;
    while (cin >> d >> m >> a) cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
}
