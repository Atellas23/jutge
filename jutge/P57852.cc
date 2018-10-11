using namespace std;

//compute gcd fast version

int gcd(int a, int b) {
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int gcd4(int a, int b, int c, int d) {
	return gcd(gcd(a,b),gcd(c,d));
}