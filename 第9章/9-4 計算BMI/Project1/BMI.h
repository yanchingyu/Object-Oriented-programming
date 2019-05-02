#ifndef BMI_H
#define BMI_H

#include <string>
using namespace std;

class BMI {
private:
	string name;
	double weight, height;
public:
	BMI();
	BMI(string, double, double);
	string getName();
	double getBMI();

};

#endif