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
��W�D�A�Ѧҵ{��15.19 TestAbstractGeometricObject.cpp,
���g�@�ӥD�{�����禡display(GeometricObject &)�A
�̭��n�]�tgetVolume�AgetArea�AgetColor�C
���D�����ϥΩ�H(abstract)���O�M��ơA�Шϥ�virtual�����C

�d�ҿ�J�G
3 red 5 blue

�d�ҿ�X�G
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***���ܡG�uarea:113.1, volume:113.1, color:red �v�bdisplay����
*/