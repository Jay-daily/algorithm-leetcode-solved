#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int i = 1;
    while(i < n)
    {
        int sum = 0;
        int j = i;
        while(sum < n)
        { 
            sum += j;
            j++;
            if(sum == n)
                answer++;
        }
        i++;
    }
    answer++;
    return answer;
}
