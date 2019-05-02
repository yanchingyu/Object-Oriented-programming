#include "Rectangle.h"

int main() {
	double width, height;

	cin >> width >> height;
	Rectangle r1(width, height);
	cin >> width >> height;
	Rectangle r2(width, height);

	cout << fixed << setprecision(2);
	Rectangle::swapByReference(r1, r2);
	cout << endl;
	Rectangle::swapByPointer( &r1, &r2);

	system("pause");
	return 0;
}

/*
交換(swap)兩個長方形物件

順序為pass-by-reference---->pass-by-pointer

設計一個長方形物件 以this方式設計

data fields(private) 為 width(double)、height(double)、

以及請設計建構者和 function: setWidth、setHeight、getArea

增加兩物件函數名稱為
swapByReference(Rectangle &r1,Rectangle &r2)
、swapByPointer(Rectangle *r1,Rectangle *r2)

讓兩個面積交換

範例輸入:

2.5 3.3 10.5 2.2

範例輸出(以面積輸出)：

SwapByReference:8.25 23.10 to 23.10 8.25
SwapByPointer:23.10 8.25 to 8.25 23.10
*/