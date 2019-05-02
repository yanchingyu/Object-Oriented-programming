#include "Student.h"

void average(Student stuArray[], int size) {
	for (int i = 0; i < size; i++) {
		cout << stuArray[i].getName() << " " << stuArray[i].getScore();
		cout << endl;
	}
}
int main() {
	Student stuArray[3];
	string name;
	int size = 0, score;
	double sum=0;

	for (int i = 0; i < 3;i++) {
		cin >> name >> score;
		stuArray[i].setName(name);
		stuArray[i].setScore(score);
		size++;
		sum += score;
	}

	average(stuArray, size);
	cout << "Average:" << fixed << setprecision(2) << sum/3;

	system("pause");
	return 0;
}

/*期中考練習 - 期中考練習 5





利用第一題的 Studen t類別

在主程式輸入3組姓名、成績建立Student stuArray[3]

然後主程式有函數average(Student stuArray[], int size)計算總平均(必須使用for)





範例輸入：
Matt 72 Albert 52 Larry 97

範例輸出：
Matt 72
Albert 52
Larry 97
Average: 73.67



※ .h 檔內請務必避免多重載入(if no define)

*/