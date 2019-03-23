#include <iostream>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	bool flag;
	for (int i0 = 1; i0 <= 9; ++i0)
		for (int i1 = 0; i1 <= 9; ++i1)
			for (int i2 = 0; i2 <= 9; ++i2)
				for (int i3 = 0; i3 <= 9; ++i3)
					for (int i4 = 0; i4 <= 9; ++i4)
						if ((i0 + i1 + i2 + i3 + i4) == n && (i0 == i4) && (i1 == i3)) {
							flag = true;
							cout << i0 << i1 << i2 << i3 << i4 << endl;
						}

	for (int i0 = 1; i0 <= 9; ++i0)
		for (int i1 = 0; i1 <= 9; ++i1)
			for (int i2 = 0; i2 <= 9; ++i2)
				for (int i3 = 0; i3 <= 9; ++i3)
					for (int i4 = 0; i4 <= 9; ++i4)
						for (int i5 = 0; i5 <= 9; ++i5)
							if ((i0 + i1 + i2 + i3 + i4 + i5) == n && (i0 == i5) && (i1 == i4) && (i2 == i3)) {
								flag = true;
								cout << i0 << i1 << i2 << i3 << i4 << i5 << endl;
							}
	if (flag == false)
		cout << -1;
	return 0;
}

//减少很多重复运算

#include <iostream>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	bool flag;
	for (int i0 = 1; i0 <= 9; ++i0)//第一位不会为0，所以最后一位也不会为0
		for (int i1 = 0; i1 <= 9; ++i1)
			for (int i2 = 0; i2 <= 9; ++i2)
				if ((i0 + i1 + i2 + i1 + i0) == n) {
					flag = true;
					cout << i0 << i1 << i2 << i1 << i0 << endl;
				}

	for (int i0 = 1; i0 <= 9; ++i0)
		for (int i1 = 0; i1 <= 9; ++i1)
			for (int i2 = 0; i2 <= 9; ++i2)
				if ((i0 + i1 + i2 + i2 + i1 + i0) == n) {
					flag = true;
					cout << i0 << i1 << i2 << i2 << i1 << i0 << endl;
				}
	if (flag == false)
		cout << -1;
	return 0;
}
