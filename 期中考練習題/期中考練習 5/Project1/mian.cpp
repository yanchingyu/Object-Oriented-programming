#include "Student.h"

void average(Student stuArray[], int size) {
	for (int i = 0; i < size; i++) {
		cout << stuArray[i].getName() << " " << stuArray[i].getScore();
		cout << endl;
	}
}
int main() {
	Student stuArray[3];
	string name;
	int size = 0, score;
	double sum=0;

	for (int i = 0; i < 3;i++) {
		cin >> name >> score;
		stuArray[i].setName(name);
		stuArray[i].setScore(score);
		size++;
		sum += score;
	}

	average(stuArray, size);
	cout << "Average:" << fixed << setprecision(2) << sum/3;

	system("pause");
	return 0;
}

/*�����ҽm�� - �����ҽm�� 5





�Q�βĤ@�D�� Studen t���O

�b�D�{����J3�թm�W�B���Z�إ�Student stuArray[3]

�M��D�{�������average(Student stuArray[], int size)�p���`����(�����ϥ�for)





�d�ҿ�J�G
Matt 72 Albert 52 Larry 97

�d�ҿ�X�G
Matt 72
Albert 52
Larry 97
Average: 73.67



�� .h �ɤ��аȥ��קK�h�����J(if no define)

*/