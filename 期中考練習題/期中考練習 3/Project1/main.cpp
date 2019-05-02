#include "Date.h"

#include <iostream>
using namespace std;

int main() {
	int year, month;

	cin >> year >> month;
	Date date1(year,month);
	cin >> year >> month;
	Date date2(year, month);

	date1.print();
	date2.print();
	
	system("pause");
	return 0;
}

/*期中考練習 - 期中考練習 3





請以分開三個檔案的方式設計 Date 類別

其 data fields(private) 為 year:int, month:int

請設計建構者和 function:setYear, setMonth, getYear, getMonth

並再加上 print() 輸出 year 和 month

主程式輸入 2 組年月建立兩個 Date 物件 date1 和 date2，然後以 print()輸出。




範例輸入：
1980 1 1996 2

範例輸出：
1980/1
1996/2



※ .h 檔內請務必避免多重載入(if no define)
*/