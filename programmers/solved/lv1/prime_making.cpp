#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int test = 0;
    for(int i =0; i < nums.size(); i++){
        for(int j = i+1; j <nums.size(); j++){
            for(int k =j+1; k<nums.size();k++ ){
                test = nums[i]+nums[j]+nums[k]; 
                for(int x = 2; x <= test; x++){
                    if(x==test){
                        answer++;
                    }
                    else if ((nums[i]+nums[j]+nums[k]) % x == 0)
                        break;
                }
                
            }
        }
    }

    return answer;
}
