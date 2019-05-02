#include <iostream>
#include <vector>
using namespace std;

int min(vector<vector<int>> array) {
	int min = array[0][0];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (min > array[i][j])
				min = array[i][j];
		}
	}
	return min;
}

int main() {
	vector<vector<int>> array(4);
	for (int i = 0; i < 4; i++)
		array[i] = vector<int>(3);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> array[i][j];
		}
	}

	cout << "min: " << min(array);

	system("pause");
	return 0;
}

/*

請利用vector方式建立一個4*3的整數矩陣
並輸入12個整數存入矩陣
接著撰寫一函數
int min(vector < vector < int > >)
使用此函數找出vector中的最小值

範例輸入：
75 55 4
44 31 81
98 75 81
86 54 40

範例輸出：
min: 4

*/
