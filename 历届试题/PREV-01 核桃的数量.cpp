/*
辗转相除法求最大公约数gcd
再利用 gcd(a, b)*lcm(a, b) = a * b
求得最小公倍数lcm
*/
#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int gcd(int a, int b) {
	while (b) {
		int r = b;
		b = a % b;
		a = r;
	}
	return a;
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int r1 = lcm(a, b);
	int r2 = lcm(r1, c);
	cout << r2;

	return 0;
}


