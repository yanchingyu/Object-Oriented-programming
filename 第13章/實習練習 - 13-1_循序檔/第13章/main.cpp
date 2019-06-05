#include "StuCard.h"

int main() {
	fstream binaryio;
	StuCard stucard[5];
	stucard[0].stuCard("Jerry", 1, 80.0, 70.0, 90.0);
	stucard[1].stuCard("John", 1, 85.0, 77.0, 95.0);
	stucard[2].stuCard("Mary", 0, 83.0, 75.0, 70.0);
	stucard[3].stuCard("Tom", 1, 73.0, 95.0, 67.0);
	stucard[4].stuCard("Claire", 0, 88.0, 79.0, 71.0);

	binaryio.open("object.dat", ios::out);
	if (binaryio.fail()) {
		cout << "file does not exist";
		return 0;
	}
	for (int i = 0; i < 5; i++) {
		stucard[i].writeToFile(binaryio);
	}
	binaryio.close();


	binaryio.open("object.dat", ios::in);
	if (binaryio.fail()) {
		cout << "file does not exist";
		return 0;
	}
	StuCard newStudent[5];
	
	for (int i = 0; i < 5; i++) {
		newStudent[i].readFromFile(binaryio);
		newStudent[i].printCard();
	}


	binaryio.close();
	system("pause");
	return 0;
}

/*
�Q��HW2�{���A�W�[����readFromFile�MwriteToFile���\��
�H�`�Ǥ�r�ɪ��覡�g�J�C
��Ʀp�U�G
Jerry, 1, 80.0, 70.0, 90.0
John, 1, 85.0, 77.0, 95.0
Mary, 0, 83.0, 75.0, 70.0
Tom, 1, 73.0, 95.0, 67.0
Claire, 0, 88.0, 79.0, 71.0

�g�J�ɮ׫�A�ɮ׸�Ʀp�U�G
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0

�AŪ���ɮ׸�ƦL�X

�d�ҿ�X�G
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0
*/