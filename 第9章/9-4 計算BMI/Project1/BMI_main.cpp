#include <iostream>
#include <iomanip>

using namespace std;
#include "BMI.h"

int main() {
	string name;
	double weight, height;

	cin >> name >> weight >> height;

	BMI BMI(name, weight, height);

	cout << fixed << setprecision(2);
	cout << BMI.getName() << " " << BMI.getBMI() << endl;
	
	system("pause");
	return 0;
}
