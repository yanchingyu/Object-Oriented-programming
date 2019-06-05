#include "Circle.h"
#include "Rectangle.h"
#include "Ball.h"
#include "Cube.h"

void equalArea(Shape &p1, Shape &p2);
void equalPerimeter(Shape2D &p1, Shape2D &p2);
void equalVolume(Shape3D &p1, Shape3D &p2);
void display(Shape &p);

int main() {
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	cout << fixed << setprecision(2);

	display(circle);
	display(rectangle);
	display(ball);
	display(cube);

	equalPerimeter(circle, rectangle);
	equalVolume(ball, cube);
	
	system("pause");
	return 0;
}

void equalArea(Shape &p1, Shape &p2) {}

void equalPerimeter(Shape2D &p1, Shape2D &p2) {
	if (p1.getPerimeter() == p2.getPerimeter())
		cout << "circle " << p1.getPerimeter() << " == "
		<< "rectangle " << p2.getPerimeter() << endl;
	else
		cout << "circle " << p1.getPerimeter() << " != "
		<< "rectangle " << p2.getPerimeter() << endl;
}

void equalVolume(Shape3D &p1, Shape3D &p2) {
	if (p1.getVolume() == p2.getVolume())
		cout << "ball " << p1.getVolume() << " == "
		<< "cube " << p2.getVolume() << endl;
	else
		cout << "ball " << p1.getVolume() << " != "
		<< "cube " << p2.getVolume() << endl;
}

void display(Shape &p) {
	Circle *circle1 = dynamic_cast<Circle*>(&p);
	Rectangle *rectangle1 = dynamic_cast<Rectangle*>(&p);
	Ball *ball_1 = dynamic_cast<Ball*>(&p);
	Cube *cube1 = dynamic_cast<Cube*>(&p);

	if (circle1 != NULL) {
		cout << circle1->toString();
	}
	if (rectangle1 != NULL) {
		cout << rectangle1->toString();
	}
	if (ball_1 != NULL) {
		cout << ball_1->toString();
	}
	if (cube1 != NULL) {
		cout << cube1->toString();
	}
	cout << ", " << p.getColor() << ", " << p.getArea() << endl;
}

/*
�]�p3�h���~�ӡG
�Ĥ@�hShape�A
�ĤG�hShape2D, Shape3D�A
�ĤT�hCircle, Rectangle�~��Shape2D�ABall, Cube(�ߤ���)�~��Shape3D�A
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2�A
�C��class�����ۤv��toString�C
Shape�p�P�ҥ���GeometricObject, �A�W�[getArea��H��ơA
Shape2D��getPerimeter��H��ơA
Shape3D��getVolume��H��ơC
�b�D�{���Ѧҵ{��15.19 TestAbstractGeometricObject.cpp����
equalArea(Shape, Shape),
equalVolume(Shape3D, Shape3D),
equalPerimeter(Shape2D, Shape2D),
display(Shape)�������getColor, toString�MgetArea

�D�{������
Circle circle(5,\"yellow\",1);
Rectangle rectangle(3, 4,\"red\",0);
Ball ball(5,\"blue\",1);
Cube cube(4,\"black\",0);
�Hdisplay���, �M��P�_circle �Mrectangle�g���O�_�۵��Aball�Mcube��n�O�_�۵��C

�d�ҿ�X�G
circle, 5, yellow, 78.54
rectangle, 3, 4, red, 12.00
ball, 5, blue, 314.16
cube, 4, black, 96.00
circle 31.42 != rectangle 14.00
ball 523.60 != cube 64.00
*/