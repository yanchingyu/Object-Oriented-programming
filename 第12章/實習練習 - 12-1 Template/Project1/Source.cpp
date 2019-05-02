#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void InsertionSort(T list[], int size) {
	cout << "From: ";
	for (int i = 0; i < 9; i++) {
		cout << list[i];
		if (i < 8)
			cout << ",";
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (list[j] > list[j + 1]) {
				T temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	cout << "To: ";
	for (int i = 0; i < 9; i++) {
		cout << list[i];
		if (i < 8)
			cout << ",";
	}
	cout << endl;
}
template<typename T>
int BinarySearch(T list[], T position[], T p[]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			if (list[j] == position[i]) {
				p[i] = j;
				break;
			}
			
			else if(j==8){
				p[i]= -1;
			}
		}
	}
	return p[3];
}

int main() {
	int position1[3], p1[3];
	for (int i = 0; i < 3; i++)
		cin >> position1[i];
	int list1[] = { 1,5,6,2,3,7,9,8,4 };
	InsertionSort(list1, 9);
	BinarySearch(list1, position1, p1);
	for (int i = 0; i < 3; i++) {
		cout << position1[i] << " at " << p1[i] << endl;
	}

	double position2[3], p2[3];
	for (int i = 0; i < 3; i++)
		cin >> position2[i];
	double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
	InsertionSort(list2, 9);
	BinarySearch(list2, position2, p2);
	for (int i = 0; i < 3; i++) {
		cout << position2[i] << " at " << p2[i] << endl;
	}

	system("pause");
	return 0;
}

/*
��12����߽m�� - 12-1 Template
�N�ҥ� P251 �� BinarySearch �M P256 �� InsertionSort �令template(T)


�M��D�{���N��ê��x�}�g�L InsertionSort �Ƨǫ�A�A�� BinarySearch ���ơC


��� list[]={1,5,6,2,3,7,9,8,4}�g�L�Ƨǫ�list[]={1,2,3,4,5,6,7,8,9}�C��J3�ӼƤ��O���o3�Ӽƪ����ޭȡC


���list[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4}�A�g�L�Ƨǫ�list[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9}�C��J3�ӼƤ��O���o3�Ӽƪ����ޭȡC







�d�ҿ�J�G
3 8 10
3.3 8.8 9.8

�d�ҿ�X�G
From: 1,5,6,2,3,7,9,8,4
To: 1,2,3,4,5,6,7,8,9
3 at 2
8 at 7
10 at -1

From: 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4
To: 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9
3.3 at 2
8.8 at 7
9.8 at -1
main.cpp
��  ��


*/