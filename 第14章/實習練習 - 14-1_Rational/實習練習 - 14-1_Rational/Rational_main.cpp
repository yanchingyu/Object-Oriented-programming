#include "Rational.h"

int main() {
	Rational first[3];
	Rational second[3];
	Rational First;
	Rational Second;

	first[0].rational(2, 3);
	first[1].rational(5, 7);
	first[2].rational(3, 5);
	First = first[0] + first[1] * first[2];

	second[0].rational(7, 2);
	second[1].rational(5, 6);
	second[2].rational(5, 7);
	Second = (second[0] - second[1]) / second[2];

	cout << "first=" << First << endl;
	cout << "second=" << Second << endl;
	cout << "++first=" << ++First << endl;
	cout << "--second=" << --Second << endl;
	
	if (First < Second)
		cout << First << "<" << Second;

	system("pause");
	return 0;
}

/*
修改主程式，完成4個分數任意組合的四則運算
以P.472-475程式陸續完成<, <=, >, >=, ==, !=, 和+, -, *, /
陸續完成<<和>>, [],+=,-=,*=, /=和左右++, --, 正負號+,-
最後修改主程式完成
first＝2/3+5/7*3/5,
second=(7/2-5/6)/(5/7) ,
比較++first和--second的大小

範例輸出：
first=23/21
second=56/15
++first=44/21
--second=41/15
44/21<41/15
*/