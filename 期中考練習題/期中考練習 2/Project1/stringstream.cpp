#include <iostream>
#include <sstream>
using namespace std;

string str;

void printStringArray(string word[], int size) {

	for (int i = 0; i < size; i++) {
		cout << word[i] << endl;
	}
	cout << str.insert(str.length(), "!!");
}
int main() {
	stringstream ss;
	string word[10];
	int size = 0;

	getline(cin,str); 
	ss << str;
	while (!(ss.eof())) {
		ss >> word[size];
		size++;
	}

	printStringArray(word, size);

	system("pause");
	return 0;
}

/*�����ҽm�� - �����ҽm�� 2





�п�J�@�r��(�����i��|�H�ťչj�}��r)

���ഫ��stringstream�i��r�����

�v���s�J�@��string�}�C��(string word[10])�A�B�v����X

��X�\��n�g�� printStringArray(string word[], int size)

�̫�ݨϥ� string �� text.insert(text.length(), "!!") �\�ഡ�J�����ĸ���r�����



�d�ҿ�J�G
Programming is fun

�d�ҿ�X�G 
Programming 
is
fun
Programming is fun!!


�� �аѦҽҥ��d�� ExtractWords.cpp

*/