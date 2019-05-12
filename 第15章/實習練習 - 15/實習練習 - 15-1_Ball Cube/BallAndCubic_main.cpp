#include "Ball.h"
#include "Cube.h"
#include "GeometricObject.h"

void ballString(Ball &ball) {
	cout << "Ball" << endl;
	cout << "radius:" << ball.getRadius() << ", ";
	cout << "area:" << ball.getArea() << ", ";
	cout << "volume:" << ball.getVolume() << ", ";
	cout << "color:" << ball.getColor();
}

void cubeString(Cube &cube) {
	cout << "Cube" << endl;
	cout << "length:" << cube.getLength() << ", ";
	cout << "area:" << cube.getArea() << ", ";
	cout << "volume:" << cube.getVolume() << ", ";
	cout << "color:" << cube.getColor();
}

int main() {
	int radius, length;
	string color;

	cout << fixed << setprecision(1);
	cin >> radius >> color;
	Ball ball(radius, color);
	ballString(ball);

	cout << endl;
	
	cin >> length >> color;
	Cube cube(length, color);
	cubeString(cube);

	system("pause");
	return 0;
}

/*
請建立球Ball和立方體Cube繼承GeometricObject,
並完成算體積getVolume和算面積getArea的功能
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
主程式輸入半徑、顏色建立1個Ball物件
再輸入邊長、顏色建立1個Cube物件，
然後輸出其各項資料

範例輸入：
3 red 5 blue

範例輸出：
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue
*/