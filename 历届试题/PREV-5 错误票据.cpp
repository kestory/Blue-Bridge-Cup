#include <iostream>
#include <algorithm>
#include <vector>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main() {
	int line, x;
	vector<int> v;
	cin >> line;
	while (cin >> x) {
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int m, n;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] - v[i - 1] == 2)
			m = v[i] - 1;
		if (v[i] == v[i - 1])
			n = v[i];
	}
	cout << m << ' ' << n;

	return 0;
}

