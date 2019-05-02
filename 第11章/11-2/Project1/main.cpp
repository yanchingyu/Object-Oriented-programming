#include "Rectangle.h"

void swapByReference(Rectangle & r1, Rectangle & r2)
{
	cout << "swapByReference:" << r1.getArea() << " " << r2.getArea();
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
	cout << " to " << r1.getArea() << " " << r2.getArea();
}

void swapByPointer(Rectangle * r1, Rectangle * r2)
{
	cout << "swapByPointer:" << (*r1).getArea() << " " << (*r2).getArea();
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
	cout << " to " << (*r1).getArea() << " " << (*r2).getArea();
}

int main() {
	double width, height;

	cin >> width >> height;
	Rectangle r1(width, height);
	cin >> width >> height;
	Rectangle r2(width, height);

	cout << fixed << setprecision(2);
	swapByReference(r1,  r2);
	cout << endl;
	swapByPointer(&r1, &r2);

	system("pause");
	return 0;
}

/*
與上題一樣以this形式設計長方形物件

進行面積swap

但主程式的觀點來設計

兩個函式
swapByReference(Rectangle &r1,Rectangle &r2)
swapByPointer(Rectangle *r1,Rectangle *r2)

data fields(private) 為 width(double)、height(double)、

以及請設計建構者和 function: setWidth、setHeight、getArea

範例輸入:

2.5 3.3 10.5 2.2

範例輸出(以面積輸出)：

SwapByReference:8.25 23.10 to 23.10 8.25 
SwapByPointer:23.10 8.25 to 8.25 23.10
*/

