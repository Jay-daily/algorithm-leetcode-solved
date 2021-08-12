#include <iostream>

using namespace std;

int main() {

	//빈틈이 없어질때까지 함
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if (b-a >=  c-b)
	{
		cout << b - a - 1;

	}
	else
		cout << c-b-1;

	

}
