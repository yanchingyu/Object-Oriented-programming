#include "Student.h"

#include <iostream>

int main() {
	Student student1("John", 90);
	Student student2("Mary", 80);

	string name;
	int score;

	cin >> name >> score;
	student1.setName(name);
	student2.setScore(score);
	cout << student1.getName() << " " << student1.getScore();
	cout << endl;
	cout << student2.getName() << " " << student2.getScore();

	system("pause");
	return 0;
}

/*期中考練習 - 期中考練習 1





請分開三個檔案方式設計一類別 Student

其data fields(private) 為 name:string, score:int

並請設計建構者和 function: setName, setScore, getName, getScore


主程式請建立兩個 Student 物件 student1("John", 90) 和 student2("Mary", 80)

然後輸入 1 個名字(string)和 1 個分數(int)，第1個輸入值修改 student1 的名字，第2個輸入值修改 student2 的分數。

最後輸出兩物件修改後的『名字』和『成績』


範例輸入：
Matt 39

範例輸出： 
Matt 90 
Mary 39



※ .h 檔內請務必避免多重載入(if no define)

*/