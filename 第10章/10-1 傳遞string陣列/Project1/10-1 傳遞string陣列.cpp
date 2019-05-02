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
/* 請輸入一字串(中間可能會以空白隔開文字)

並轉換為stringstream進行字串分割

逐項存入一維string陣列中(string word[10])，且逐項輸出

輸出功能要寫成 printStringArray(string word[], int size)

最後需使用 string 的 length() 功能輸出此字串的長度(包含空白)




範例輸入：
Programming is fun

範例輸出： 
Programming 
is
fun
Length:18



※ 請參考課本範例 ExtractWords.cpp
 
*/ 
