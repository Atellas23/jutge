#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    int k = 0;
    for (int i = 0; i < n-1; ++i) {
        if (nums[i] == nums[n-1]) ++k;
    }
    cout << k << endl;
}
