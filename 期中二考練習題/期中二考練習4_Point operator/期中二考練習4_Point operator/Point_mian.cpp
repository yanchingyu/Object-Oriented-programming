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
	cout << ((point1 + point2) - point3);
	

	system("pause");
	return 0;
}


/*
�Q�Ϋe�@�D���򧹦�+,-, <<��operator overloading
�D�{����J3�ծy�Ыغcpoint1, point2, point3
�Hoperator�p��point1+point2-point3�ÿ�X

�d�ҿ�J�G
1 0 -3 1 -4 3

�d�ҿ�X�G
(1,0)+(-3,1)-(-4,3)=(2,-2)
*/