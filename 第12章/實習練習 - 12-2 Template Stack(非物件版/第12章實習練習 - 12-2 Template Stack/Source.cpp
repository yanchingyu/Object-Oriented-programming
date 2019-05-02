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
利用程式12.7 ImproveStack.h和程式12.5 TestGenericStack.cpp的使用方式。


輸入9個字元push到Stack（以字元處理），然後pop三個後，以中間的符號運算，將結果push回Stack。


重複此動作直到算式結束，最後數字為結果。




範例輸入：
7-9/9-3*2

範例輸出：
6 
3 
3 
4
*/