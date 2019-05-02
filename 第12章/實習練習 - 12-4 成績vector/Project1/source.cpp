#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void StudentScore(vector<vector<double>> &student) {
	/*student[5][3]={{80.0, 70.0, 90.0},
				   {85.0, 77.0, 95.0},
				   {83.0, 75.0, 70.0},
				   {73.0, 95.0, 67.0},
				   {88.0, 79.0, 71.0}}*/
					
					
	student[0][0] = 80.0; student[0][1] = 70.0; student[0][2] = 90.0;
	student[1][0] = 85.0; student[1][1] = 77.0; student[1][2] = 95.0;
	student[2][0] = 83.0; student[2][1] = 75.0; student[2][2] = 70.0;
	student[3][0] = 73.0; student[3][1] = 95.0; student[3][2] = 67.0;
	student[4][0] = 88.0; student[4][1] = 79.0; student[4][2] = 71.0;
}

void stuAve(vector<vector<double>> &student) {
	for (int i = 0; i < 5; i++) {
		double total = 0;
		for (int j = 0; j < 3; j++) {
			cout << student[i][j] << ", ";
			total += student[i][j];
		}
		cout << total / 3 << endl;
	}
}

double total[3];
double * courseAve(vector<vector<double>> &student) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			total[i] += student[j][i];
		}
	}
	return &total[3];
}


int main() {
	vector<vector<double>> student(5);

	for (int i = 0; i < 5; i++) 
		student[i] = vector<double>(3);
	
	StudentScore(student);

	cout << fixed << setprecision(1);
	stuAve(student);
	*courseAve( student);

	cout << "Average: ";
	for (int i = 0; i < 3; i++) {
		cout << total[i]/5;
		if (i < 2)
			cout << ", ";
	}

	system("pause");
	return 0;
}
