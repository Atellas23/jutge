#include <iostream>
#include <vector>
using namespace std;
using vs = vector<string>;

string compta_digits(int x) {
	vector<int> q(10);
	while(x != 0) {
		++q[x%10];
		x /= 10;
	}
	string s = "0000000000";
	for (int i = 0; i < 10; ++i) s[i] = '0' + q[i];
	return s;
}

/*ll number_transform(string s) {
	ll sum = 0;
	for (int i = 0; i < s.length(); ++i) {
		sum += s[i] - '0';
		sum *= 10;
	}
	return sum/10;
}*/

void push(vs& cds,string s) {
	for (int i = 0; i < cds.size(); ++i) if (cds[i] == s) return;
	cds.push_back(s);
}

void llegeix(int n) {
	//int k = 0;
	int l;
	vs cds;
	//vector<bool> used(9999999999, false);
	for (int i = 0; i < n; ++i) {
		cin >> l;
		push(cds,compta_digits(l));
		//ll num = number_transform(compta_digits(l));
		/*if (not used[num]) {
			++k;
			used[num] = true;
		}*/
	}
	cout << cds.size() << endl;
}

int main() {
	int n;
	while (cin >> n) {
		llegeix(n);
	}
}
