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
�洫(swap)��Ӫ���Ϊ���

���Ǭ�pass-by-reference---->pass-by-pointer

�]�p�@�Ӫ���Ϊ��� �Hthis�覡�]�p

data fields(private) �� width(double)�Bheight(double)�B

�H�νг]�p�غc�̩M function: setWidth�BsetHeight�BgetArea

�W�[�⪫���ƦW�٬�
swapByReference(Rectangle &r1,Rectangle &r2)
�BswapByPointer(Rectangle *r1,Rectangle *r2)

����ӭ��n�洫

�d�ҿ�J:

2.5 3.3 10.5 2.2

�d�ҿ�X(�H���n��X)�G

SwapByReference:8.25 23.10 to 23.10 8.25
SwapByPointer:23.10 8.25 to 8.25 23.10
*/