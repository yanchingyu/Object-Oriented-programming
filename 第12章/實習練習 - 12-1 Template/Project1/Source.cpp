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
第12章實習練習 - 12-1 Template
將課本 P251 之 BinarySearch 和 P256 之 InsertionSort 改成template(T)


然後主程式將凌亂的矩陣經過 InsertionSort 排序後，再用 BinarySearch 找資料。


原來 list[]={1,5,6,2,3,7,9,8,4}經過排序後list[]={1,2,3,4,5,6,7,8,9}。輸入3個數分別找到這3個數的索引值。


原來list[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4}，經過排序後list[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9}。輸入3個數分別找到這3個數的索引值。







範例輸入：
3 8 10
3.3 8.8 9.8

範例輸出：
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
執  行


*/