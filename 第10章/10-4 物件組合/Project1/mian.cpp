#include "Student.h"
#include "Date.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
	Date birth1(6, 1, 1999);
	Date birth2(10, 8, 1997);
	Student student1("John", birth1, 90);
	Student student2("Marry", birth2, 80);

	string name;
	int year, month, day;

	cin >> name >> month >> day >> year;
	Date date(month, day, year);

	student1.setName(name);
	student2.setDate(date);

	student1.print();
	student2.print();

	system("pause");
	return 0;
}

/*�ĤQ����߽m�� - 10-4 ����զX





�Q�ΤW�Ǵ� Deitel �ҥ��d�� 10.8 �� Date ���O�A�A�Ѧ� Deitel �ҥ��d��10.10 �P 10.11 ���Ϊk�C

�Ф��}�����ɮפ覡�]�p�����O Date �P Student

Date ���O�� data fields(private): month(int)�Bday(int)�Byear(int)


Student ���O�� data fields(private): name(string)�BbirthDay(Date)�Bscore(int)



Date ���O���г]�p�غc�̩M function: print�Aprint ���\�ର��X�y��z�B�y��z�B�y�~�z

Student ���O���г]�p�غc�̩M function: setName�BgetName�BsetDate�BgetDate�BsetScore�BgetScore�Bprint



�D�{���إߨ�� Date ���� birth1(6, 1, 1999) �Bbirth2(10, 8, 1997)


��D�{���A�إߨ�� Student ���� student1("John", birth1, 90) �Mstudent2("Marry", birth2, 80)


�M���J�W�r(string)�B�~(int)�B��(int)�B��(int)�A���O�ק� student1 ���W�r�M�ק� student2 ���ͤ�

�̫�Q�� Studen ���󤤪� print �i���X�C





�d�ҿ�J�G
Jerry 5 4 1991

�d�ҿ�X�G
Jerry 6/1/1999 90
Marry 5/4/1991 80



�� �D�{���]�i�H�ϥ� student1("John", Date(6, 1, 1999), 90) ���覡�إߪ���Cget function �Ьһݨϥ� const

*/