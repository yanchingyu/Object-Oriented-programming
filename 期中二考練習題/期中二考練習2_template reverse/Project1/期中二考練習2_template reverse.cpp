#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size){
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		newList[j] = list[i];
	}
}

template<typename T>
void printArray(const T list[], int size){
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}

template<typename T>
void print(const T list[], T newList[],  int size) {

	reverse(list, newList, size);
	cout << "The original array: ";
	printArray(list, size);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newList, size);
	cout << endl;
}

int main(){
	const int SIZE = 6;
	char list1[] = { 'a', 'b', 'c', 'd', 'e', 'f' }, newList1[SIZE];
	double list2[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 }, newList2[SIZE];

	print(list1,  newList1, SIZE);
	print(list2, newList2, SIZE);

	return 0;
}

/*
請將課本範例7.7 ReverseArray.cpp改成template版本,請用T代表
讓程式可以處理任何資料型態的反向輸出。

範例輸出：
The original array: a b c d e f
The reversed array: f e d c b a
The original array: 1.1 2.2 3.3 4.4 5.5 6.6
The reversed array: 6.6 5.5 4.4 3.3 2.2 1.1
*/