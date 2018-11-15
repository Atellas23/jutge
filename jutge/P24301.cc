#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int> & V1, const vector<int> & V2) {
    vector<int> u;
    for (int i = 0; i < V1.size(); ++i) u.push_back(V1[i]);
    for (int j = 0; j < V2.size(); ++j) u.push_back(V2[j]);
    return u;
}
