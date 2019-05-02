#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
	double height, width;
	
	Rectangle rectangle[3];

	for (int i = 0; i < 3; i++) {
		cin >> height >> width;
		rectangle[i].setHeight(height);
		rectangle[i].setWidth(width);
	}
	for (int i = 0; i < 3; i++) {
		cout << rectangle[i].getHeight() << " " << rectangle[i].getWidth() << " " << rectangle[i].getArea();
		cout << endl;
	}
	cout << Rectangle::getNumOfRect() << "Rectangles";
	


	system("pause");
	return 0;
}

/*
�åH���}�T���ɮת��覡�N�� Circle ����ק令 Rectangle ����A�� Rectangle �㦳 const �M static �\��C

data fields(private) �� width(double)�Bheight(double)�BnumOfRect(int)

�H�νг]�p�غc�̩M function: setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea�BgetNumOfRect

��D�{������J 3 �ժ��P�e�A�إ� 3 �� Rectangle ����A�̫��X�U�Ӫ���Ϊ��y���z�B�y�e�z�B�y���n�z�B�y�`�@���X�Ӫ���Ρz�C







�d�ҿ�J�G
1 2 2 3 3 4

�d�ҿ�X�G
1 2 2 
2 3 6 
3 4 12 
3 Rectangles



�� �n�D�Gint numOfRect ����������Ϊ��Ӽƻݨ㦳 static �\��AgetNumOfRect()�]���㦳 static �\��A�� getWidth()�B getHeight()�BgetArea() �ݨ㦳 const�C
 */ 
