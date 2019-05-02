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

�ЧQ��vector�覡�إߤ@��4*3����Ưx�}
�ÿ�J12�Ӿ�Ʀs�J�x�}
���ۼ��g�@���
int min(vector < vector < int > >)
�ϥΦ���Ƨ�Xvector�����̤p��

�d�ҿ�J�G
75 55 4
44 31 81
98 75 81
86 54 40

�d�ҿ�X�G
min: 4

*/
