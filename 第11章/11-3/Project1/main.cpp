#include "Rectangle.h"

void averageArea(Rectangle rectangleArray[], int size) {
	cout << "Average:";
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += rectangleArray[i].getArea();
	}
	cout << total / size << endl;
	cout << size << " Rectangles";
}
int main() {
	double width, height;

	Rectangle rectangleArray[3];
	for (int i = 0; i < 3; i++) {
		cin >> width >> height;
		rectangleArray[i].setWidth(width);
		rectangleArray[i].setHeight(height);
		rectangleArray[i];
	}
	cout << fixed << setprecision(1);
	averageArea(rectangleArray, rectangleArray[3].getNumOfRect());

	system("pause");
	return 0;
}

/*

設計一個長方形物件陣列

Rectangle 具有const與static功能

用static 變數累積個數

data fields(private) 為 width(double)、height(double)、numOfRect(int)

以及請設計建構者和 function: setWidth、getWidth、setHeight、getHeight、getArea、getNumOfRect


寫一個主程式的函數
averageArea(Rectangle rectangleArray[],int size]

計算陣列的平均面積

範例輸入：
1 2 2 3 3 4

範例輸出：
Average:6.7
3 Rectangles

※ 要求：int numOfRect 為紀錄長方形的個數需具有
static 功能，getNumOfRect()也須具有 static 功能，
而 getWidth()、 getHeight()、getArea() 需具有 const。
*/