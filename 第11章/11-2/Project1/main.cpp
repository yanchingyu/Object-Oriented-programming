#include "Rectangle.h"

void swapByReference(Rectangle & r1, Rectangle & r2)
{
	cout << "swapByReference:" << r1.getArea() << " " << r2.getArea();
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
	cout << " to " << r1.getArea() << " " << r2.getArea();
}

void swapByPointer(Rectangle * r1, Rectangle * r2)
{
	cout << "swapByPointer:" << (*r1).getArea() << " " << (*r2).getArea();
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
	cout << " to " << (*r1).getArea() << " " << (*r2).getArea();
}

int main() {
	double width, height;

	cin >> width >> height;
	Rectangle r1(width, height);
	cin >> width >> height;
	Rectangle r2(width, height);

	cout << fixed << setprecision(2);
	swapByReference(r1,  r2);
	cout << endl;
	swapByPointer(&r1, &r2);

	system("pause");
	return 0;
}

/*
�P�W�D�@�˥Hthis�Φ��]�p����Ϊ���

�i�歱�nswap

���D�{�����[�I�ӳ]�p

��Ө禡
swapByReference(Rectangle &r1,Rectangle &r2)
swapByPointer(Rectangle *r1,Rectangle *r2)

data fields(private) �� width(double)�Bheight(double)�B

�H�νг]�p�غc�̩M function: setWidth�BsetHeight�BgetArea

�d�ҿ�J:

2.5 3.3 10.5 2.2

�d�ҿ�X(�H���n��X)�G

SwapByReference:8.25 23.10 to 23.10 8.25 
SwapByPointer:23.10 8.25 to 8.25 23.10
*/

