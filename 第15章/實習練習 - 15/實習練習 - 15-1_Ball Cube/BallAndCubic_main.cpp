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
�Ыإ߲yBall�M�ߤ���Cube�~��GeometricObject,
�ç�������ngetVolume�M�⭱�ngetArea���\��
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
�D�{����J�b�|�B�C��إ�1��Ball����
�A��J����B�C��إ�1��Cube����A
�M���X��U�����

�d�ҿ�J�G
3 red 5 blue

�d�ҿ�X�G
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue
*/