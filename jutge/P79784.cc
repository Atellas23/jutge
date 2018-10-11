#include <iostream>
using namespace std;

struct crd {
	int x;
	int y;
};

int main() {
	crd coordenades ={
		0,
		0
	};
	char c;
	while (cin >> c) {
		if (c == 'n') --coordenades.y;
		else if (c == 's') ++coordenades.y;
		else if (c == 'w') --coordenades.x;
		else if (c == 'e') ++coordenades.x;
	}
	cout << "(" << coordenades.x << ", " << coordenades.y << ")" << endl;
}