#include <iostream>
#include <sstream>

using namespace std;

void printStringArray(string word[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		cout << word[i] << endl;
		total += word[i].length();
	}
	cout << "Length:" << total+(size-1);
}

int main() {
	stringstream ss;
	string word[10], str;
	int size = 0;

	getline(cin, str);
	ss << str;
	while (!(ss.eof())) {
		ss >> word[size];
		size++;
	}

	printStringArray(word, size);

	system("pause");
	return 0;
}
/* �п�J�@�r��(�����i��|�H�ťչj�}��r)

���ഫ��stringstream�i��r�����

�v���s�J�@��string�}�C��(string word[10])�A�B�v����X

��X�\��n�g�� printStringArray(string word[], int size)

�̫�ݨϥ� string �� length() �\���X���r�ꪺ����(�]�t�ť�)




�d�ҿ�J�G
Programming is fun

�d�ҿ�X�G 
Programming 
is
fun
Length:18



�� �аѦҽҥ��d�� ExtractWords.cpp
 
*/ 
