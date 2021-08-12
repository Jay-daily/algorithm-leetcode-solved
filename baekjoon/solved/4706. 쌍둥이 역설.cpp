#include <iostream>
#include <math.h>

using namespace std;

int main() {

	double a = 1.0;
	double b = 2.0;
	double ans;

	while (1) {

		cin >> a >> b;

		if (a == 0 && b == 0)
		{
			return 0;
		}
		//r = b/a
		//제곱 (b/a)제곱
		//1- 앞의 값 = v제곱 c제곱
		//루트 다시 씌우고
		//그 값을 역수 취하고,
		//v를 곱하기
		ans = (sqrt(1 - pow(b / a, 2.0))/1.0);

		
		printf("%.3lf\n", ans);
		
		

	}


}
