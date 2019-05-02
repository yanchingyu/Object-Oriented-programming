#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Student {
public:
	Student();
	Student(string, Date, int);

	void setName(string);
	void setDate(Date);
	void setScore(int);

	string getName() const;
	Date getDate() const;
	int getScore() const;
	void print();

private:
	string name;
	Date birthDay;
	int score;
};
#endif 