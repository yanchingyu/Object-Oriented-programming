#include "Date.h"

#include <iostream>
using namespace std;

int main() {
	int year, month;

	cin >> year >> month;
	Date date1(year,month);
	cin >> year >> month;
	Date date2(year, month);

	date1.print();
	date2.print();
	
	system("pause");
	return 0;
}

/*�����ҽm�� - �����ҽm�� 3





�ХH���}�T���ɮת��覡�]�p Date ���O

�� data fields(private) �� year:int, month:int

�г]�p�غc�̩M function:setYear, setMonth, getYear, getMonth

�æA�[�W print() ��X year �M month

�D�{����J 2 �զ~��إߨ�� Date ���� date1 �M date2�A�M��H print()��X�C




�d�ҿ�J�G
1980 1 1996 2

�d�ҿ�X�G
1980/1
1996/2



�� .h �ɤ��аȥ��קK�h�����J(if no define)
*/