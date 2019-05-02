#include "StuCard.h"
#include "Date.h"

void  DataGrup(Date  birthDay[], StuCard  Data[], string name, bool sex, double score1, double score2, double score3, int month, int day, int year, int i) {
	
		Data[i].setName(name);
		Data[i].setSex(sex);
		Data[i].setScore(0, score1);
		Data[i].setScore(1, score2);
		Data[i].setScore(2, score3);
		birthDay[i].setDate(month, day, year);
		birthDay[i].setYear(year);
		Data[i].setDate(birthDay[i]);
	
}

double average[3];
double * classAver(StuCard * Data, int amount) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < amount; j++) {
			average[i] += Data[j].getScore(i);
		}
	}
	return & average[3];
}

int main() {
	string name;
	bool sex;
	double scoreAry[3];
	int month, day, year;
	Date birthDay[5];
	StuCard Data[5];

	DataGrup(birthDay, Data, "Jerry", 1, 80.0, 70.0, 90.0, 3, 20, 1997, 0);
	DataGrup(birthDay, Data, "John", 1, 85.0, 77.0, 95.0, 5, 20, 1995, 1);
	DataGrup(birthDay, Data, "Mary", 0, 83.0, 75.0, 70.0, 2, 18, 2007, 2);
	DataGrup(birthDay, Data, "Tom", 1, 73.0, 95.0, 67.0, 11, 8, 2003, 3);

	cin >> name >> sex;
	for (int i = 0; i < 3; i++)
		cin >> scoreAry[i];
	cin >> month >> day >> year;

	DataGrup(birthDay, Data, name, sex, scoreAry[0], scoreAry[1], scoreAry[2], month, day, year, 4);
	

	cout << fixed << setprecision(1);

	for (int i = 0; i < 5; i++) {
		Data[i].printCard();
	}

	*classAver( Data, 5);
	cout << "Average: ";
	for (int i = 0; i < 3; i++) {
		cout << average[i]/5;
		if (i < 2)
			cout << ", ";
	}

	system("pause");
	return 0;
}

/*
有一學生的資料卡class StuCard,
其資料欄位有
姓名string name,
性別 bool sex，
三科分數double scoreAry[3],
生日Date birthDay(月日年)。

1.請完成此類別的函數：
建構者、
setName(string), setSex(bool), setScore(int, double), setDate(int, int, int)，setDate(Date)
getName(): string, getSex(): bool, getScore(int): double, Date getDate()
average(): double計算三科平均
getAge(int): int 計算年紀 (只看年不考慮月日)
printCard(): void列印個人資料如下：
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, aver:80.0, age: 20

2. 主程式完成一個函數要計算每科的平均double* classAver(StuCard[], int)

3.在主程式先建立4個人資料
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997
John, 1, 85.0, 77.0, 95.0, 5/20/1995
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003
然後輸入一組個人資料建立第5個人
最後透過printCard()輸出

範例輸入：
Claire 0 88.0 79.0 71.0 9 1 2000

範例輸出：
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, 80.0, 21
John, 1, 85.0, 77.0, 95.0, 5/20/1995, 85.7, 23
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007, 76.0, 11
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003, 78.3, 15
Claire, 0, 88.0, 79.0, 71.0, 9/1/2000, 79.3, 18
Average: 81.8, 79.2, 78.6
*/