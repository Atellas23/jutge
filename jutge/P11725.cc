#include <iostream>
#include <vector>
using namespace std;

bool exists(int x, const vector<int>& V) {
    for (int i = 0; i < V.size(); ++i) {
        if (V[i] == x) return true;
    }
    return false;
}
