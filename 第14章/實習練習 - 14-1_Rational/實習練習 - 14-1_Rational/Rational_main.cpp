#include "Rational.h"

int main() {
	Rational first[3];
	Rational second[3];
	Rational First;
	Rational Second;

	first[0].rational(2, 3);
	first[1].rational(5, 7);
	first[2].rational(3, 5);
	First = first[0] + first[1] * first[2];

	second[0].rational(7, 2);
	second[1].rational(5, 6);
	second[2].rational(5, 7);
	Second = (second[0] - second[1]) / second[2];

	cout << "first=" << First << endl;
	cout << "second=" << Second << endl;
	cout << "++first=" << ++First << endl;
	cout << "--second=" << --Second << endl;
	
	if (First < Second)
		cout << First << "<" << Second;

	system("pause");
	return 0;
}

/*
�ק�D�{���A����4�Ӥ��ƥ��N�զX���|�h�B��
�HP.472-475�{�����򧹦�<, <=, >, >=, ==, !=, �M+, -, *, /
���򧹦�<<�M>>, [],+=,-=,*=, /=�M���k++, --, ���t��+,-
�̫�ק�D�{������
first��2/3+5/7*3/5,
second=(7/2-5/6)/(5/7) ,
���++first�M--second���j�p

�d�ҿ�X�G
first=23/21
second=56/15
++first=44/21
--second=41/15
44/21<41/15
*/