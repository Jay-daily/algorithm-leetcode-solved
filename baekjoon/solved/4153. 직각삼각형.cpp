#include <iostream>
#include <math.h>


using namespace std;



int main() {



	//두변의 길이의 합이 가장 큰 변의 길이 보다 커야함.(같아서도 안됨)

	while (1) {

		int x, y, z;

		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			break;

		x = pow(x, 2);
		y = pow(y, 2);
		z = pow(z, 2);

		if (x == (y + z) || y == (x+z) || z == (x+y) )
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	
	}
}
