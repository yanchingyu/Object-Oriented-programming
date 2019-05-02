#include <iostream>
#include <stack>
using namespace std;

char Arithmetic(char a, char n, char b) {
	int num1 = a - '0';
	int num2 = b - '0';
	
	switch(n) {
	case '+': cout << num1 + num2 << endl; return ((num1 + num2));
	case '-': cout << num1 - num2 << endl; return ((num1 - num2));
	case '*': cout << num1 * num2 << endl; return ((num1 * num2));
	case '/': cout << num1 / num2 << endl; return ((num1 / num2));
	default: break;
	}
}

void POPstack(stack<char> &math) {
	char array[3];
	char num3;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			array[j] = math.top();
			math.pop();
		}
		num3 = Arithmetic(array[2], array[1], array[0])+'0';
		math.push(num3);
	}
}

int main() {
	stack<char> math;
	char number, array[9];

	for (int i = 0; i < 9; i++) {
		cin >> number;
		math.push(number);
	}

	POPstack(math);

	system("pause");
	return 0;
}

/*
�Q�ε{��12.7 ImproveStack.h�M�{��12.5 TestGenericStack.cpp���ϥΤ覡�C


��J9�Ӧr��push��Stack�]�H�r���B�z�^�A�M��pop�T�ӫ�A�H�������Ÿ��B��A�N���Gpush�^Stack�C


���Ʀ��ʧ@����⦡�����A�̫�Ʀr�����G�C




�d�ҿ�J�G
7-9/9-3*2

�d�ҿ�X�G
6 
3 
3 
4
*/