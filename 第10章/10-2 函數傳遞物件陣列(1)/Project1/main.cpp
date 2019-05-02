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
