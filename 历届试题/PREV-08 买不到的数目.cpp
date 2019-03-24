待：搞懂里面的数论知识&动归的方法
数论：互质数的最大不能组合数
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	cout << a*b - a - b;
	return 0;
}



// 数论知识：互质数的最大不能组合数上界是lcm(a, b)，互质所以即a*b
// gcd(a, b) = 1    =>    lcm(a, b) = a * b
// because gcd(a, b) * lcm(a, b) = a * b

// 运行超时	得分66，最后一组测试数据 257 191 在我电脑上要跑2.5秒
// 强行优化，多加break，从后往前找，一遇到第一个无法组合的数就是它了

#include <iostream>
#include <cstring> //memset
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

bool x[100000];
int re;
void judge(int a, int b) { //判断一个数能否由a,b两个数组合
	int lcm = a * b;
	int num;
	// for (num = 1; num <= lcm; ++num) {
	for (num = lcm; num >= a; --num) {
		for (int i = 0; i <= num / a; ++i) {//a最大个数
			for (int j = 0; j <= num / b; ++j) { //b最大个数
				if (i * a + j * b == num) {
					x[num] = true;
					break;
				}
			}
			if (x[num] == true)
				break;
		}
		if (x[num] == false)
			break;
	}
	/*
	for (int i = 0; i < a * b; ++i)
	{
		cout << i << '\t';
	}
	cout << endl;
	for (int i = 0; i < a * b; ++i)
	{
		cout << x[i] << '\t';
	}
	*/
	//直接找最后的false
	re = num;
	/*节约时间都可以不用了
	for (int i = lcm - 1; i > 1; --i)
		if (x[i] == 0) {
			re = i;
			break;
		}
	*/
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	// memset(x, false, sizeof(x));
	judge(a, b);
	cout << re;
	return 0;
}


// ？？？直接按顺序填，然后从后往前找，要多快有多快
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	bool x[100000];
	for (int i = 0; i <= b; i++) {
		for (int j = 0; j <= a; j++) {
			x[i * a + b * j] = true;
		}
	}

	for (int i = a * b - 1; i > 1; --i)
		if (x[i] == 0) {
			cout << i;
			break;
		}
	return 0;
}
