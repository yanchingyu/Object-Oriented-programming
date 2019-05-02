#include "Rectangle.h"

int main() {
	int width, height;
	Rectangle rectArray[5];

	for (int i = 0; i < 5; i++) {
		cin >> width >> height;
		rectArray[i].setWidth(width);
		rectArray[i].setHeight(height);
		cout << rectArray[i].getArea() << " ";
	}
	cout << endl;
	cout << "Total: " << rectArray[5].getNum() << " " << "rectangles";
	cout << endl;
	Rectangle::sum(rectArray, rectArray[5].getNum());

	system("pause");
	return 0;
}

/*
HW1傳遞長方形陣列，並使用static和const
修改長方形物件含有static和const功能，並寫一函數可以傳遞長方形物件並計算總面積。
參考範例10-5 TotalArea.cpp,
10.7 CircleWithStaticDataFields.cpp,
10.9 CircleWithConstantMemberFunctions.cpp。
要求函數名稱sum(Rectangle rectArray[], int size)
主程式輸入5組長寬創立5個長方形，
並輸出各個長方形的面積、長方形數量及總面積。

範例輸入：
3 17 1 19 3 11 2 10 8 10

範例輸出：
51 19 33 20 80
Total: 5 rectangles
Area: 20
*/