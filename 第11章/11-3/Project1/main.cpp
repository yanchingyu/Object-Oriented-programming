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

�]�p�@�Ӫ���Ϊ���}�C

Rectangle �㦳const�Pstatic�\��

��static �ܼƲֿn�Ӽ�

data fields(private) �� width(double)�Bheight(double)�BnumOfRect(int)

�H�νг]�p�غc�̩M function: setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea�BgetNumOfRect


�g�@�ӥD�{�������
averageArea(Rectangle rectangleArray[],int size]

�p��}�C���������n

�d�ҿ�J�G
1 2 2 3 3 4

�d�ҿ�X�G
Average:6.7
3 Rectangles

�� �n�D�Gint numOfRect ����������Ϊ��Ӽƻݨ㦳
static �\��AgetNumOfRect()�]���㦳 static �\��A
�� getWidth()�B getHeight()�BgetArea() �ݨ㦳 const�C
*/