#ifndef STUCARD_H
#define STUCARD_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

class StuCard {
private:
	string *name = NULL;
	bool sex;
	double scoreAry[3];
public:
	StuCard();
	void stuCard( string name1, bool sex, double score1, double score2, double score3);

	void setName( string name1);
	void setSex(bool sex);
	void setScore(int th, double score);

	string getName();
	bool getSex();
	double getScore(int th);

	void printCard();

	void writeToFile(fstream &out);
	void readFromFile(fstream &in);
};
#endif 