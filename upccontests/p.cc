#include <iostream>
#include <vector>
using namespace std;
using vc = vector<char>;
using vvc = vector<vc>;
using vi = vector<int>;
using vvi = vector<vi>;

const int inf = 1e8;
int a,b;

vvi costs;
vvc map;

void rec() {
    int max_row = map.size()-2;
    int max_col = map[0].size()-1;
    for (int i = max_row; i > -1; --i) {
        for (int j = 0; j < max_col; ++j) {
            costs[i][j] += ;
        }
    }
}

void aux() {
    int i = map.size()-1;
    int j = map[0].size()-1;
    for (int k = i; k > -1; --k) {
        for (int l = 0; l < j; ++l) {
            if (map[k][l] == 'T') costs[k][l] += 3;
            else if (map[k][l] == '*') costs[k][l] += inf;
        }
    }
    rec();
}

int main() {
    int n,m;
    cin >> n >> m;
    map = vvc(n,vc(m));
    costs = vvi(n,vi(m,0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> map[i][j];
            if (map[i][j] == 'M') {
                a = i;
                b = j;
            }
        }
    }
}
