// 相遇后是否向相反方向可以看做两只蚂蚁擦肩而过
/*

--> lr        --> rr
        cold
<-- ll        <-- rl

*/
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int cold, t, n, sum, lr = 0, rr = 0, ll = 0, rl = 0; //记得初始化

	cin >> n >> cold;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> t;
		if (t > 0) {
			if (abs(t) < abs(cold))
				lr++;
			else
				rr++;
		}
		else {
			if (abs(t) < abs(cold))
				ll++;
			else
				rl++;
		}
	}

	if (cold > 0) {
		if (rl > 0)
			sum = rl + lr + 1;
		else
			sum = 1;
	}
	else {
		if (lr > 0)
			sum = lr + rl + 1;
		else
			sum = 1;
	}
	cout << sum;
	return 0;
}
