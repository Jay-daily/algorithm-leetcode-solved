#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main(){

	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {

		int x;
		cin >> x;
		int p1w = 0;
		int p2w = 0;
		
		for (int j = 0; j < x; j++)
		{
			string p1 = "";
			string p2 = "";
			cin >> p1 >> p2;
			

			if (p1 == "R")
			{
				if (p2 == "P")
					p2w--;
				else if (p2 == "S")
					p1w++;
				else
					;
			}
			else if (p1 == "P")
			{
				if (p2 == "S") p2w--;
				else if (p2 == "R") p1w++;
				else;

			}
			else
			{
				if (p2 == "R") p2w--;
				else if (p2 == "P") p1w++;
				else;

			}
		}
		if (p1w + p2w > 0)cout << "Player 1" << endl;
		else if (p1w + p2w < 0)cout << "Player 2" << endl;
		else cout << "TIE"<<endl;

	}



	return 0;
	


}


