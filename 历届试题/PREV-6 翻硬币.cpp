#include <iostream>
#include <string>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main() {
	string s1, s2;
	int result = 0;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length() - 1; ++i) {
		if (s1[i] != s2[i]) {
			result++;
			if (s1[i] == 'o')s1[i] = '*';
			else s1[i] = 'o';
			if (s1[i + 1] == 'o')s1[i + 1] = '*';
			else s1[i + 1] = 'o';

		}
	}
	cout << result;
	return 0;
}





