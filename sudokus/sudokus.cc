#include <iostream>
#include <vector>
//#include <algorithm>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vv;
typedef vector<vv> m;



/* per comptar
 * vi counter(9,0);
for (int n = 1; n < 10; ++n) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (n == a[i][j][0])
        }
        cout << endl;
    }
}*/

/* imprimir la matriu
void print(m a) {
    cout << endl;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << a[i][j][0] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
* */

void Entra_Matriu(m& a) {
    int k;
    vi a_1(9);
    vv a_2(9);
    for (int h = 0; h < 9; ++h) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 11; ++j) {
                if (j == 0) {
                    cin >> k;
                    a_1[j]= k;
                }
                else if (j == 11){
                    if (h <= 2 and i <=2) {a_1[j] = 1 }
                    else if (h > 2) {}
                    else if () {}
                    else if () {}
                    else if () {}
                    else if () {}
                    else if () {}
                    else if () {}
                    else {}
                }
                else a_1[j] = 0;
            }
            a_2[i] = a_1;
        }
        a[h] = a_2;
    }
}

int main () {
    vi a_1(11);
    vv a_2(9);
    m a(9);
    Entra_Matriu(a);
    //print(a);
    
}
