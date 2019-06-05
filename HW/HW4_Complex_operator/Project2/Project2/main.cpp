#include "Complex.h"

int main() {
	Complex first[3], second[2], value[2];

	first[0].complex(3, 4);
	first[1].complex(2, -4);
	first[2].complex(3, -1);
	second[0].complex(4, 3);
	second[1].complex(5, 6);

	value[0] = first[0] + first[1] * first[2];
	value[1] = second[0] - second[1];

	cout << "first=" << value[0] << endl;
	cout << "second=" << value[1] << endl;
	cout << "++first=" << ++value[0] << endl;
	cout << "--second=" << --value[1];

	system("pause");
	return 0;
}