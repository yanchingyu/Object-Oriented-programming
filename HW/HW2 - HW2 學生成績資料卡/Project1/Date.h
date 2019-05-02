#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Date {
private:
	int month, day, year;
public:
	Date();
	
	void setDate(int month, int day, int year);

	void setYear(int year);
	int getYear();

	void  print();
};
#endif 