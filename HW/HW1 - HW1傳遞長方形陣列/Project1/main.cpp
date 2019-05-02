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
HW1�ǻ�����ΰ}�C�A�èϥ�static�Mconst
�ק����Ϊ���t��static�Mconst�\��A�üg�@��ƥi�H�ǻ�����Ϊ���íp���`���n�C
�Ѧҽd��10-5 TotalArea.cpp,
10.7 CircleWithStaticDataFields.cpp,
10.9 CircleWithConstantMemberFunctions.cpp�C
�n�D��ƦW��sum(Rectangle rectArray[], int size)
�D�{����J5�ժ��e�Х�5�Ӫ���ΡA
�ÿ�X�U�Ӫ���Ϊ����n�B����μƶq���`���n�C

�d�ҿ�J�G
3 17 1 19 3 11 2 10 8 10

�d�ҿ�X�G
51 19 33 20 80
Total: 5 rectangles
Area: 20
*/