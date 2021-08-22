#include <string>
#include <vector>

using namespace std;
 int howFar(int position, int wheretogo){
        if((position == 1) || (position ==3)){
            if (wheretogo==2) return 1;
            else if(wheretogo==5) return 2;
            else if(wheretogo==8) return 3;
            else if(wheretogo==0) return 4;
        }
        else if((position == 4) || (position ==6)){
            if (wheretogo==2) return 2;
            else if(wheretogo==5) return 1;
            else if(wheretogo==8) return 2;
            else if(wheretogo==0) return 3;
        }
        else if((position == 7) || (position ==9)){
            if (wheretogo==2) return 3;
            else if(wheretogo==5) return 2;
            else if(wheretogo==8) return 1;
            else if(wheretogo==0) return 2;
        }
        else if((position == 10) || (position ==11)){
            if (wheretogo==2) return 4;
            else if(wheretogo==5) return 3;
            else if(wheretogo==8) return 2;
            else if(wheretogo==0) return 1;
        }

        else if(position == 2){
            if (wheretogo==2) return 0;
            else if(wheretogo==5) return 1;
            else if(wheretogo==8) return 2;
            else if(wheretogo==0) return 3;
        }
        else if(position == 5){
            if (wheretogo==2) return 1;
            else if(wheretogo==5) return 0;
            else if(wheretogo==8) return 1;
            else if(wheretogo==0) return 2;
        }
        else if(position == 8){
            if (wheretogo==2) return 2;
            else if(wheretogo==5) return 1;
            else if(wheretogo==8) return 0;
            else if(wheretogo==0) return 1;
        }
        else if(position == 0){
            if (wheretogo==2) return 3;
            else if(wheretogo==5) return 2;
            else if(wheretogo==8) return 1;
            else if(wheretogo==0) return 0;
        }


    }

string solution(vector<int> numbers, string hand) {
    string answer = "";

    int leftPosition =10; int rightPosition =11;

    for(int i=0; i<numbers.size();i++){
        if ((numbers[i]==1)||(numbers[i]==4)||(numbers[i]==7)){
            answer += 'L';
            leftPosition = numbers[i];
        }
        else if ((numbers[i]==3)||(numbers[i]==6)||(numbers[i]==9)){
            answer += 'R';
            rightPosition = numbers[i];
        }
        else if ((numbers[i]==2)||(numbers[i]==5)||(numbers[i]==8)||(numbers[i]==0)){
            if (howFar(leftPosition,numbers[i])>howFar(rightPosition,numbers[i])){
                answer += 'R';
                rightPosition = numbers[i];
            }
            else if (howFar(leftPosition,numbers[i])< howFar(rightPosition,numbers[i])){
                answer += 'L';
                leftPosition = numbers[i];
            }
            else if (howFar(leftPosition,numbers[i])==howFar(rightPosition,numbers[i])){
                if(hand == "left"){
                    answer += 'L';
                    leftPosition = numbers[i];
                }
                else {
                    answer +='R';
                    rightPosition = numbers[i];
                }

            }

        }
    }

    return answer;
}

 //좌(*,1,4,7) 왼
    //우(#,3,6,9) 오
    //중(2,5,8,0)
        //거리에 따라 왼/오 //거리를 위해 (오른손위치,왼손위치) - (2,5,8,0) 거리 구하기
                          //모든 번호별 거리 계산
                              //1,3 -> 2(1),5(2),8(3),0(4)
                              //2 -> 2(0),5(1),8(2),0(3)
                              //4,6 -> 2(2),5(1),8(2),0(3)
                              //5 -> 2(1),5(0),8(1),0(2)
                              //7,9 -> 2(3),5(2),8(1),0(2)
                              //8 -> 2(2),5(1),8(0),0(1)
                              //0 -> 2(3),5(2),8(1),0(0)
                              //*,# -> 2(4),5(3),8(2),0(1)
                              //같으면 hand에 따라 분류
