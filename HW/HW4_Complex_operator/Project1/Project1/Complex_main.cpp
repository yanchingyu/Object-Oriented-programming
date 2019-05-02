#include "Complex.h"

int main() {
	Complex first[3];
	Complex second[2];
	Complex value[2];

	first[0].re = 3; first[0].im = 4;
	first[1].re = 2; first[1].im = -4;
	first[2].re = 3; first[2].im = -1;

	second[0].re = 4; second[0].im = 3;
	second[1].re = 5; second[1].im = 6;

	value[0] = first[1] * first[2];
	value[0] += first[0];
	value[1] = second[0] - second[1];

	cout << "first=" << value[0] << endl;
	cout << "second=" << value[1] << endl;
	cout << "++first=" << ++value[0] << endl;
	cout << "--second=" << --value[1];

	system("pause");
	return 0;
}