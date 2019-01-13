#include <iostream>
#include <cmath>
using namespace std;

void home() {
	cout << "I'm at home now!" << endl;
}

void draw(double delta_x,double delta_y) {
	cout << "I've drawn this vector: (" << delta_x << ',' << delta_y << ")." << endl;
}

void auxiliar(int n,double d,const int& org) {
	if (n == 0) return;
	if ((org-n) % 2 == 0) {
		draw(d,0);
		draw(0,d);
		draw(-d,0);
		draw(0,-d/2);
		auxiliar(n-1,d/sqrt(2),org);
		draw(0,-d/2);
	}
	else {
		draw(d/sqrt(2),d/sqrt(2));
		draw(d/sqrt(2),-d/sqrt(2));
		draw(-d/sqrt(2),-d/sqrt(2));
		draw(-d/(2*sqrt(2)),d/(2*sqrt(2)));
		auxiliar(n-1,d/sqrt(2),org);
		draw(-d/(2*sqrt(2)),d/(2*sqrt(2)));
	}
}

void drawSquares(int n,double d) {
	auxiliar(n,d,n);
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int n;
	double d;
	while (cin >> n >> d) {
		home();
		drawSquares(n,d);
	}
}
