#include "Ball.h"
#include "Cube.h"

void display(GeometricObject &p) {
	cout << "area:" << p.getArea() << ", ";
	cout << "volume:" << p.getVolume() << ", ";
	cout << "color:" << p.getColor();
}

int main() {
	int radius, length;
	string color;

	cout << fixed << setprecision(1);
	cin >> radius >> color;
	Ball ball(radius, color);
	cout << "Ball" << endl;
	cout << "radius:" << ball.getRadius() << ", ";
	display(ball);

	cout << endl;

	cin >> length >> color;
	Cube cube(length, color);
	cout << "Cube" << endl;
	cout << "length:" << cube.getLength() << ", ";
	display(cube);

	system("pause");
	return 0;
}

/*
續上題，參考程式15.19 TestAbstractGeometricObject.cpp,
撰寫一個主程式的函式display(GeometricObject &)，
裡面要包含getVolume，getArea，getColor。
此題必須使用抽象(abstract)類別和函數，請使用virtual完成。

範例輸入：
3 red 5 blue

範例輸出：
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***提示：「area:113.1, volume:113.1, color:red 」在display完成
*/