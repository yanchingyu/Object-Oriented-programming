#include "BMI.h"

BMI::BMI() {
	weight = 0;
	height = 0;
}

BMI::BMI(string newName, double newWeight, double newHeight) {
	name = newName;
	weight = newWeight;
	height = newHeight;
}

string BMI::getName() {
	return name;
}

double BMI::getBMI() {
	return weight / (height*height);
}