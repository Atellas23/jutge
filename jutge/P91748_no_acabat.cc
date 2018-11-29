#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Square;

void swap2(int& a,int& b) {
	int c = a;
	a = b;
	b = c;
}

void refill(Row& checks,int n) {
	for (int i = 0; i < n; ++i) checks[i] = i+1;
}

void search_and_pop(Row& v,int a) {
	int pos = -1;
	for (int i = 0; i < v.size(); ++i) if (v[i] == a) pos = i;
	if (pos == -1) return;
	swap2(v[pos],v[v.size()-1]);
	v.pop_back();
}

void checkrow(const Square& q,int indx,Row checks) {
	for (int j = 0; j < q.size(); ++j) search_and_pop(checks,q[indx][j]);
}

void checkcol(const Square& q,int indx,Row checks) {
	for (int i = 0; i < q.size(); ++i) search_and_pop(checks,q[i][indx]);
}

bool is_latin(const Square& q) {
	Row checks(q.size());
	for (int i = 0; i < q.size(); ++i) {
		refill(checks,q.size());
		checkrow(q,i,checks);
		if (checks.size() != 0) return false;
		refill(checks,q.size());
		checkcol(q,i,checks);
		if (checks.size() != 0) return false;
	}
	return true;
}

int main() {
  int n;
  while (cin >> n) {
    Square q(n, Row(n));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) cin >> q[i][j];
    cout << is_latin(q) << endl;
}
}
