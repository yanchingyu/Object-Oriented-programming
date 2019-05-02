#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int score;
public:
	Student();
	Student(string, int);

	void setName(string);
	void setScore(int);

	string getName();
	int getScore();


};
#endif 