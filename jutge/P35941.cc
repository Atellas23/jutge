#include <iostream>
#include <string>
using namespace std;

int pos(string diccionari,char lletra) {
	for (int i = 0; i < diccionari.size(); ++i) if (diccionari[i] == lletra) return i;
}

void translate(string actual,string diccionari) {
	for (int i = 0; i < actual.size(); ++i) {
		if (actual[i] == '_') cout << ' ';
		else cout << char('a'+pos(diccionari,actual[i]));
	}
	cout << endl;
}

void operate(string diccionari) {
	int n;
	cin >> n;
	for (int j = 0; j < n; ++j) {
		string actual;
		cin >> actual;
		translate(actual,diccionari);
	}
	cout << endl;
}

int main() {
	string diccionari;
	while (cin >> diccionari) operate(diccionari);
}
