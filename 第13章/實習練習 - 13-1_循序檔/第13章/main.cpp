#include "StuCard.h"

int main() {
	StuCard stucard;
	stucard.writeToFile();
	stucard.readFromFile();


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