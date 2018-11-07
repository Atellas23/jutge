//FOR THE RECORD: aquest programa no el vas enviar, tot i que el vas acabar just
//abans de que la Maria Josep digués que l'examen havia acabat (12:03h del 06/11/2018).
#include <iostream>
using namespace std;

//Precondició: 0 < x < 36 és natural.
//Escriu cada mòdul x en forma de dígit.
void printbase(int x) {
	if (x > 9) {
		char u = 'A' + x - 10;
		cout << u;
	}
	else cout << x;
}

//Precondició: 2 <= b <= 36 natural, n > 0 natural.
//Canvia de base recursivament.
void canvidebase(int n,int b) {
	if (n/b == 0) printbase(n);
	else {
		canvidebase(n/b,b);
		printbase(n%b);
	}
}

//Precondició: 2 <= b <= 36 natural, n > 0 natural.
//Guarda al paràmetre "max" el màxim mòdul de "n" per totes les bases "b" que
//li entren a través de les iteracions de maxmodbase(). Si troba un màxim, el
//canvia i substitueix "base" per la "b" corresponent.
void nextbasemod(int n,int b,int& base,int& max) {
	if (n/b == 0) {
		if (n > max) {
			max = n;
			base = b;
		}
	}
	else {
		nextbasemod(n/b,b,base,max);
		if (n%b > max) {
			max = n%b;
			base = b;
		}
	}
}

//Precondició: n > 0 natural.
//Aquesta funció és auxiliar, recorre totes les i entre 2 i 36 per trobar el
//dígit màxim a través de la funció nextbasemod().
void maxmodbase(int n, int& base, int& max) {
	max = 0;
	for (int i = 2; i < 37; ++i) {
		nextbasemod(n,i,base,max);
	}
}

int main() {
	int n,base,max;
	while(cin >> n) {
		cout << n << " = ";
		maxmodbase(n,base,max);
		canvidebase(n,base);
		cout << " (base " << base << ")" << endl;
	}
}