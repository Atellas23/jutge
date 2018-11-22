#include <iostream>
#include <vector>
using namespace std;
using row = vector<char>;
using mc = vector<row>;

void escriu_matriu(mc& m) {
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m.size(); ++j) cout << m[i][j];
		cout << endl;
	}
    cout << endl;
}
void fill_up(mc& m,int& i,int& j,int k) {
    for (int s = i; s > i-k; --s) m[s][j] = 'X';
    i -= k-1;
}
void fill_down(mc& m,int& i,int& j,int k) {
    for (int s = i; s < i+k; ++s) m[s][j] = 'X';
    i += k-1;
}
void fill_right(mc& m,int& i,int& j,int k) {
    for (int s = j; s < j+k; ++s) m[i][s] = 'X';
    j += k-1;
}
void fill_left(mc& m,int& i,int& j,int k) {
    for (int s = j; s > j-k; --s) m[i][s] = 'X';
    j -= k-1;
}

int main() {
	int n;
    bool primer = true;
	while (cin >> n and n != 0) {
		mc m(n,row(n,'.'));
        int i = n-1,j = 0;
        fill_right(m,i,j,n);
        while (n > 1) {
            fill_up(m,i,j,n);
            if (n > 1) fill_left(m,i,j,--n);
            if (n > 1) fill_down(m,i,j,--n);
            if (n > 1) fill_right(m,i,j,--n);
            --n;
        }
        escriu_matriu(m);
	}
}
