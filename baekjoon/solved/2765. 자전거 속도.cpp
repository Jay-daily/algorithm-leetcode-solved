#include <iostream>



using namespace std;



int main() {

	double a;
	double b=-1;
	double c;
	int count = 1;

	while (b != 0)
	{

		
		cin >> a >> b >> c;
		double x, y;

		x = a * 3.1415926535 * b / 63360;
		y = x / c * 3600;

		if (b == 0)
		{
			break;
		}
		cout << "Trip #" << count << ": ";
		printf("%.2lf %.2lf\n", x, y);

		count++;
	}


}
