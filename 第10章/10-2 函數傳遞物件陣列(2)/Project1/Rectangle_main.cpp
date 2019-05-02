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
/*  �åH���}�T���ɮת��覡�N�� Circle ����ק令 Rectangle ����

data fields(private) �� width(double)�Bheight(double)

�H�νг]�p�غc�̩M function: setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea

��D�{������J 4 �ժ��P�e�A�إ� 4 �� Rectangle ����

�b�D�{���~���г]�p sum(Rectangle rectArray[], int size) �MprintRectangleArray(Rectangle rectArray[], int size) ��Ө禡�A���O���p�����ΰ}�C���`���n�P��X����Ϊ��y��(width)�z�B�y�e(height)�z�B�y���n�z�B�y�`���n�z




�d�ҿ�J�G
13 12 11 7 16 8 19 14

�d�ҿ�X�G 
13 12 156
11 7 77
16 8 128
19 14 266
Total: 627
 
*/ 
