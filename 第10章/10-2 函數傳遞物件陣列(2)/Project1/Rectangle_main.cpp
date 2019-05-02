#include "Rectangle.h"
#include <iostream>
using namespace std;

double total = 0;

void printRectangleArray(Rectangle rectArray[], int size) {
	cout << "Total:" << total;
}

void sum(Rectangle rectArray[], int size) {
	for (int i = 0; i < size; i++) {
		cout << rectArray[i].getHeight() << " " << rectArray[i].getWidth() << " " << rectArray[i].getArea();
		cout << endl;
		total += rectArray[i].getArea();
	}
}

int main() {
	double height, width;
	int size = 4;
	Rectangle rectArray[4];

	for (int i = 0; i < 4; i++) {
		cin >> height >> width;
		rectArray[i].setHeight(height);
		rectArray[i].setWidth(width);
	}
	
	sum(rectArray, size);
	printRectangleArray(rectArray, size);

	system("pause");
	return 0;
}
/*  並以分開三個檔案的方式將其 Circle 物件修改成 Rectangle 物件

data fields(private) 為 width(double)、height(double)

以及請設計建構者和 function: setWidth、getWidth、setHeight、getHeight、getArea

於主程式中輸入 4 組長與寬，建立 4 個 Rectangle 物件

在主程式外部請設計 sum(Rectangle rectArray[], int size) 和printRectangleArray(Rectangle rectArray[], int size) 兩個函式，分別為計算長方形陣列的總面積與輸出長方形的『長(width)』、『寬(height)』、『面積』、『總面積』




範例輸入：
13 12 11 7 16 8 19 14

範例輸出： 
13 12 156
11 7 77
16 8 128
19 14 266
Total: 627
 
*/ 
