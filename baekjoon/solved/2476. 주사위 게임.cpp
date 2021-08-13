#include <iostream>
#include <algorithm>


using namespace std;



int main(){

	int n;
	int x[1000][3];
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cin >> x[i][j];
			
		}

	}

	int maxa = 0;
	int maxamt = 0;

	for (int i = 0; i < n; i++)
	{
		

		if ((x[i][0] == x[i][1])&& (x[i][0] == x[i][2]))
		{
			
			if (10000 + x[i][0] * 1000 > maxamt)
			{
				maxamt = 10000 + x[i][0] * 1000;
			}

		}

		if (x[i][0] == x[i][1])
		{
			if (1000 + x[i][0]*100 > maxamt)
			{
				maxamt = 1000 + x[i][0] * 100;
			}

		}
		else if (x[i][0] == x[i][2])
		{
			if (1000 + x[i][0] * 100 > maxamt)
			{
				maxamt = 1000 + x[i][0] * 100;
			}

		}

		else if (x[i][2] == x[i][1])
		{
			if (1000 + x[i][1] * 100 > maxamt)
			{
				maxamt = 1000 + x[i][1] * 100;
			}
		}

		else
		{
			if ((max({ x[i][0],x[i][1],x[i][2] }) * 100 > maxamt))
			{
				maxamt = (max({ x[i][0],x[i][1],x[i][2] })) * 100;
			}
			
		}

	}


	cout << maxamt;

	return 0;
	


}


