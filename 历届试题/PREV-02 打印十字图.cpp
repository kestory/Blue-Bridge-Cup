//参考图：https://blog.csdn.net/jopus/article/details/19091643
#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main() {
	int a;// = 3;
	cin >> a;
	int row = 5 + 2 * a * 2;
	int col = row;
	//动态开辟空间
	char **p = new char*[row]; //开辟行
	for (int i = 0; i < row; i++)
		p[i] = new char[col]; //开辟列

	//0、初始化
	for (int i = 0 ; i < row ; i++)
		for (int j = 0; j < col; j++)
			p[i][j] = '.';

	//1、中间的十字
	int center = row / 2;
	for (int i = center - 2; i <= center + 2; ++i) {
		p[center][i] = '$';
		p[i][center] = '$';
	}

	//2、从里向外打印边框，每次+2
	int add = 4;
	// int frame=center-add;
	while (center - add >= 0) {
		for (int i = center - add + 2; i <= center + add - 2; ++i) {
			//横两线
			p[center - add][i] = '$';
			p[center + add][i] = '$';

			//竖两线
			p[i][center - add] = '$';
			p[i][center + add] = '$';

		}
		//四个角，每个角是三个点
		//四个拐点
		p[center - add + 2][center - add + 2] = '$';
		p[center - add + 2][center + add - 2] = '$';
		p[center + add - 2][center - add + 2] = '$';
		p[center + add - 2][center + add - 2] = '$';



		p[center - add + 2 - 1][center - add + 2] = '$';
		p[center - add + 2 - 1][center + add - 2] = '$';
		p[center + add - 2 + 1][center - add + 2] = '$';
		p[center + add - 2 + 1][center + add - 2] = '$';


		p[center - add + 2][center - add + 2 - 1] = '$';
		p[center - add + 2][center + add - 2 + 1] = '$';
		p[center + add - 2][center - add + 2 - 1] = '$';
		p[center + add - 2][center + add - 2 + 1] = '$';


		add += 2;
		// frame=center-add;;
	}


	//输出
	for (int i = 0 ; i < row ; i++) {
		for (int j = 0; j < col; j++) {
			// cout << p[i][j] << ' ';
			cout << p[i][j];
		}
		cout << endl;
	}

	return 0;
}

