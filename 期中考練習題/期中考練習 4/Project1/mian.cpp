#include "Student.h"
#include "Date.h"

int main() {
	string name;
	int year, month, score;

	cin >> name >> year >> month >> score;
	Date date1(year, month);
	Student student1(name, date1, score);

	cin >> name >> year >> month >> score;
	Date date2(year, month);
	Student student2(name, date2, score);

	student1.print();
	student2.print();

	system("pause");
	return 0;
}

/*�����ҽm�� - �����ҽm�� 4





�Ф��}�����ɮפ覡�]�p�����O Student�BDate

Student �� data fields �� name:string, birthDay:Date(�~��), score:int

Date �� data fields �� year:int, month:int

�����O�ҽг]�p�A�� �غc�� �M function (�i�ѦҲĤ@�D�P�ĤT�D)

��Student���O���Х[�Jprint�\��


�D�{����J2�թm�W�B�~�B��B���Z�إߨ��Student����student1�Mstudent2

�̫�Q��Student��print��X�C







�d�ҿ�J�G
Anna 1964 2 40 Bill 1993 10 1

�d�ҿ�X�G
Anna 1964/2 40
Bill 1993/10 1



�� .h �ɤ��аȥ��קK�h�����J(if no define)

*/