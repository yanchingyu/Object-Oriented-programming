#include "Student.h"
#include "Date.h"

int main() {
	string name;
	int year, month, score;

	cin >> name >> year >> month >> score;
	Date date1(year, month);
	Student student1(name, date1, score);

	cin >> name >> year >> month >> score;
	Date date2(year, month);
	Student student2(name, date2, score);

	student1.print();
	student2.print();

	system("pause");
	return 0;
}

/*期中考練習 - 期中考練習 4





請分開五個檔案方式設計兩類別 Student、Date

Student 的 data fields 為 name:string, birthDay:Date(年月), score:int

Date 的 data fields 為 year:int, month:int

兩類別皆請設計適當的 建構者 和 function (可參考第一題與第三題)

於Student類別中請加入print功能


主程式輸入2組姓名、年、月、成績建立兩個Student物件student1和student2

最後利用Student的print輸出。







範例輸入：
Anna 1964 2 40 Bill 1993 10 1

範例輸出：
Anna 1964/2 40
Bill 1993/10 1



※ .h 檔內請務必避免多重載入(if no define)

*/