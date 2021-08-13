#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main(){

	double a, a1, n;
	cin >> a >> a1;
	double ap = a / a1 *1000;
	double min = ap;

	
	int an;
	cin >> an;
	int b1[1000] = { 0, };
	double b2[1000] = { 0, };
	double bp[1000] = { 0, };

	for (int j = 0; j < an; j++)
	{
		cin >> b1[j] >> b2[j];
		bp[j] = b1[j] / b2[j] * 1000;
		if (bp[j] < min) min = bp[j];
	}
	
	printf("%.2lf",min);

	return 0;
	


}


