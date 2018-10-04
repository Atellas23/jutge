#include <iostream>
using namespace std;

int main () {
	int x,y;
	cin >> x >> y;
	cout << "Banknotes of 500 euros: " << x / 500 << endl;
	x %= 500;
	cout << "Banknotes of 200 euros: " << x / 200 << endl;
	x %= 200;
	cout << "Banknotes of 100 euros: " << x / 100 << endl;
	x %= 100;
	cout << "Banknotes of 50 euros: " << x / 50 << endl;
	x %= 50;
	cout << "Banknotes of 20 euros: " << x / 20<< endl;
	x %= 20;
	cout << "Banknotes of 10 euros: " << x / 10 << endl;
	x %= 10;
	cout << "Banknotes of 5 euros: " << x / 5 << endl;
	x %= 5;
	cout << "Coins of 2 euros: " << x / 2 << endl;
	x %= 2;
	cout << "Coins of 1 euro: " << x << endl;
	cout << "Coins of 50 cents: " << y / 50 << endl;
	y %= 50;
	cout << "Coins of 20 cents: " << y / 20 << endl;
	y %= 20;
	cout << "Coins of 10 cents: " << y / 10 << endl;
	y %= 10;
	cout << "Coins of 5 cents: " << y / 5 << endl;
	y %= 5;
	cout << "Coins of 2 cents: " << y / 2 << endl;
	y %= 2;
	cout << "Coins of 1 cent: " << y << endl;
}
