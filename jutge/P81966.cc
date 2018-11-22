#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right) {
	if (left > right) return -1;
	else {
		int mid = (left+right)/2;
		if (x > v[mid]) return position(x,v,mid+1,right);
		else if (x < v[mid]) return position(x,v,left,mid-1);
		else return mid;
	}
}
