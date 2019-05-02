#include "StuCard.h"
#include "Date.h"

void  DataGrup(Date  birthDay[], StuCard  Data[], string name, bool sex, double score1, double score2, double score3, int month, int day, int year, int i) {
	
		Data[i].setName(name);
		Data[i].setSex(sex);
		Data[i].setScore(0, score1);
		Data[i].setScore(1, score2);
		Data[i].setScore(2, score3);
		birthDay[i].setDate(month, day, year);
		birthDay[i].setYear(year);
		Data[i].setDate(birthDay[i]);
	
}

double average[3];
double * classAver(StuCard * Data, int amount) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < amount; j++) {
			average[i] += Data[j].getScore(i);
		}
	}
	return & average[3];
}

int main() {
	string name;
	bool sex;
	double scoreAry[3];
	int month, day, year;
	Date birthDay[5];
	StuCard Data[5];

	DataGrup(birthDay, Data, "Jerry", 1, 80.0, 70.0, 90.0, 3, 20, 1997, 0);
	DataGrup(birthDay, Data, "John", 1, 85.0, 77.0, 95.0, 5, 20, 1995, 1);
	DataGrup(birthDay, Data, "Mary", 0, 83.0, 75.0, 70.0, 2, 18, 2007, 2);
	DataGrup(birthDay, Data, "Tom", 1, 73.0, 95.0, 67.0, 11, 8, 2003, 3);

	cin >> name >> sex;
	for (int i = 0; i < 3; i++)
		cin >> scoreAry[i];
	cin >> month >> day >> year;

	DataGrup(birthDay, Data, name, sex, scoreAry[0], scoreAry[1], scoreAry[2], month, day, year, 4);
	

	cout << fixed << setprecision(1);

	for (int i = 0; i < 5; i++) {
		Data[i].printCard();
	}

	*classAver( Data, 5);
	cout << "Average: ";
	for (int i = 0; i < 3; i++) {
		cout << average[i]/5;
		if (i < 2)
			cout << ", ";
	}

	system("pause");
	return 0;
}

/*
���@�ǥͪ���ƥdclass StuCard,
������즳
�m�Wstring name,
�ʧO bool sex�A
�T�����double scoreAry[3],
�ͤ�Date birthDay(���~)�C

1.�Ч��������O����ơG
�غc�̡B
setName(string), setSex(bool), setScore(int, double), setDate(int, int, int)�AsetDate(Date)
getName(): string, getSex(): bool, getScore(int): double, Date getDate()
average(): double�p��T�쥭��
getAge(int): int �p��~�� (�u�ݦ~���Ҽ{���)
printCard(): void�C�L�ӤH��Ʀp�U�G
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, aver:80.0, age: 20

2. �D�{�������@�Ө�ƭn�p��C�쪺����double* classAver(StuCard[], int)

3.�b�D�{�����إ�4�ӤH���
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997
John, 1, 85.0, 77.0, 95.0, 5/20/1995
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003
�M���J�@�խӤH��ƫإ߲�5�ӤH
�̫�z�LprintCard()��X

�d�ҿ�J�G
Claire 0 88.0 79.0 71.0 9 1 2000

�d�ҿ�X�G
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, 80.0, 21
John, 1, 85.0, 77.0, 95.0, 5/20/1995, 85.7, 23
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007, 76.0, 11
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003, 78.3, 15
Claire, 0, 88.0, 79.0, 71.0, 9/1/2000, 79.3, 18
Average: 81.8, 79.2, 78.6
*/