#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main(){

	int a[5][4] = { 0, };
	int sum[5] = { 0, };
	int max = 0;
	int maxnum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
		sum[i] = a[i][0] + a[i][1] + a[i][2] + a[i][3];
		
		
	}

	for (int i = 0; i < 5; i++) {

		if (sum[i] > max)
		{
			max = sum[i];
			maxnum = i+1;
		}

	}
	cout << maxnum << " " << max;


	return 0;
	


}


