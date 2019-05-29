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
	Shape *p1 = &p;
	Circle *circle1 = dynamic_cast<Circle*>(p1);
	Rectangle *rectangle1 = dynamic_cast<Rectangle*>(p1);
	Ball *ball_1 = dynamic_cast<Ball*>(p1);
	Cube *cube1 = dynamic_cast<Cube*>(p1);

	if (circle1 != NULL) {
		cout << circle1->toString() << ", " << p.getColor() << ", " << p.getArea() << endl;
	}
	if (rectangle1 != NULL) {
		cout << rectangle1->toString() << ", " << p.getColor() << ", " << p.getArea() << endl;
	}
	if (ball_1 != NULL) {
		cout << ball_1->toString() << ", " << p.getColor() << ", " << p.getArea() << endl;
	}
	if (cube1 != NULL) {
		cout << cube1->toString() << ", " << p.getColor() << ", " << p.getArea() << endl;
	}
}

/*
設計3層的繼承：
第一層Shape，
第二層Shape2D, Shape3D，
第三層Circle, Rectangle繼承Shape2D，Ball, Cube(立方體)繼承Shape3D，
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2，
每個class都有自己的toString。
Shape如同課本的GeometricObject, 再增加getArea抽象函數，
Shape2D有getPerimeter抽象函數，
Shape3D有getVolume抽象函數。
在主程式參考程式15.19 TestAbstractGeometricObject.cpp完成
equalArea(Shape, Shape),
equalVolume(Shape3D, Shape3D),
equalPerimeter(Shape2D, Shape2D),
display(Shape)完成顯示getColor, toString和getArea

主程式完成
Circle circle(5,\"yellow\",1);
Rectangle rectangle(3, 4,\"red\",0);
Ball ball(5,\"blue\",1);
Cube cube(4,\"black\",0);
以display顯示, 然後判斷circle 和rectangle週長是否相等，ball和cube體積是否相等。

範例輸出：
circle, 5, yellow, 78.54
rectangle, 3, 4, red, 12.00
ball, 5, blue, 314.16
cube, 4, black, 96.00
circle 31.42 != rectangle 14.00
ball 523.60 != cube 64.00
*/