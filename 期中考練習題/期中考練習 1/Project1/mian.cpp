#include "Student.h"

#include <iostream>

int main() {
	Student student1("John", 90);
	Student student2("Mary", 80);

	string name;
	int score;

	cin >> name >> score;
	student1.setName(name);
	student2.setScore(score);
	cout << student1.getName() << " " << student1.getScore();
	cout << endl;
	cout << student2.getName() << " " << student2.getScore();

	system("pause");
	return 0;
}

/*�����ҽm�� - �����ҽm�� 1





�Ф��}�T���ɮפ覡�]�p�@���O Student

��data fields(private) �� name:string, score:int

�ýг]�p�غc�̩M function: setName, setScore, getName, getScore


�D�{���Ыإߨ�� Student ���� student1("John", 90) �M student2("Mary", 80)

�M���J 1 �ӦW�r(string)�M 1 �Ӥ���(int)�A��1�ӿ�J�ȭק� student1 ���W�r�A��2�ӿ�J�ȭק� student2 �����ơC

�̫��X�⪫��ק�᪺�y�W�r�z�M�y���Z�z


�d�ҿ�J�G
Matt 39

�d�ҿ�X�G 
Matt 90 
Mary 39



�� .h �ɤ��аȥ��קK�h�����J(if no define)

*/