#ifndef DATE_H
#define DATE_H

class Date{
private:
	int year, month;
public:
	Date();
	Date(int, int);

	void setYear(int);
	void setMonth(int);

	int getYear();
	int getMonth();

	void print();
};
#endif 