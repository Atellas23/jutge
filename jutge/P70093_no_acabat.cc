#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<double> merge(const vector<double>& V1, const vector<double>& V2) {
	int i=0,j=0;
	vector<double> c;
	for (int i = 0; i < V1.size(); ++i) c.push_back(V1[i]);
	for (int j = 0; j < V2.size(); ++j) c.push_back(V2[i]);
	sort(c.begin(),c.end());
	return c;
}
