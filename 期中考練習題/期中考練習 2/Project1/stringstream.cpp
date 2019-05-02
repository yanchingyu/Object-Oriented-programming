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

/*期中考練習 - 期中考練習 2





請輸入一字串(中間可能會以空白隔開文字)

並轉換為stringstream進行字串分割

逐項存入一維string陣列中(string word[10])，且逐項輸出

輸出功能要寫成 printStringArray(string word[], int size)

最後需使用 string 的 text.insert(text.length(), "!!") 功能插入兩個驚嘆號於字串尾部



範例輸入：
Programming is fun

範例輸出： 
Programming 
is
fun
Programming is fun!!


※ 請參考課本範例 ExtractWords.cpp

*/