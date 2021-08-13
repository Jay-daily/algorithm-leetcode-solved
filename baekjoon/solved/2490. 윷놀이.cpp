#include <iostream>
#include <algorithm>


using namespace std;



int main(){

	for (int i = 0; i < 3; i++) {

		int a[4];
		int ct0 = 0;
		int ct1 = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> a[i];
			if (a[i] == 0)
				ct0++;
			else if (a[i] == 1)
				ct1++;
		}
		
		if (ct0 == 4)
		{
			cout << "D" << endl;
		}
		else if (ct0 == 3)
		{
			cout << "C" << endl;
		}
		else if (ct0 == 2)
			cout << "B" << endl;
		else if (ct0 == 1)
		{
			cout << "A" << endl;
		}
		else
			cout << "E" << endl;

	}
	return 0;
	


}


