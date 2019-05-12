#include "Point.h"

int main() {
	int num1, num2;

	cin >> num1 >> num2;
	Point point1(num1, num2);
	cin >> num1 >> num2;
	Point point2(num1, num2);
	cin >> num1 >> num2;
	Point point3(num1, num2);

	cout << point1.toString();
	cout << "+";
	cout << point2.toString();
	cout << "-";
	cout << point3.toString();
	cout << "=";
	cout << point1 + point2 - point3;
	

	system("pause");
	return 0;
}


/*
利用前一題陸續完成+,-, <<的operator overloading
主程式輸入3組座標建構point1, point2, point3
以operator計算point1+point2-point3並輸出

範例輸入：
1 0 -3 1 -4 3

範例輸出：
(1,0)+(-3,1)-(-4,3)=(2,-2)
*/