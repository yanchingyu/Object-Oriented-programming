#include "Rectangle.h"
#include <iostream>
using namespace std;

double printRectangleArray(double rectArray[], int size) {
	
	for (int i = 0; i < size; i++) {
		cout << rectArray[i] << " ";
		if (i == 2||i==5||i==8||i==11)
			cout << endl;
	}
}

double sum(double rectArray[], int size) {

	cout << "Total:" << size;
}
int main() {
	double height1,width1, height2, width2, height3, width3, height4, width4;
	

	cin >> height1 >> width1 >> height2 >> width2 >> height3 >> width3 >> height4 >> width4;
	Rectangle rectangle1(height1,width1);
	Rectangle rectangle2(height2, width2);
	Rectangle rectangle3(height3, width3);
	Rectangle rectangle4(height4, width4);

	double rectArray[12] = {height1,width1,rectangle1.getArea(),
							height2,width2,rectangle2.getArea(),
							height3,width3,rectangle3.getArea(),
							height4,width4,rectangle4.getArea() };
	int total = rectArray[2]+ rectArray[5]+ rectArray[8]+ rectArray[11];
	printRectangleArray(rectArray, 12);
	sum(rectArray,total);
	


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
