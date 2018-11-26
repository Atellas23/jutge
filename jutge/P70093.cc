#include <iostream>
#include <vector>
using namespace std;
using vd = vector<double>;

vd merge(const vd& V1, const vd& V2) {
	int i=0,j=0;
	vd c;
	while (i < V1.size() and j < V2.size()) {
		if (V1[i] <= V2[j]) {
			c.push_back(V1[i]);
			++i;
		}
		else {
			c.push_back(V2[j]);
			++j;
		}
	}
	while (i < V1.size()) {
		c.push_back(V1[i]);
		++i;
	}
	while (j < V2.size()) {
		c.push_back(V2[j]);
		++j;
	}
	return c;
}
