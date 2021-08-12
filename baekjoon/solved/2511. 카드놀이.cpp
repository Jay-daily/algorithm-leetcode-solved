#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    //각라운드 더큰사람 승자 3점
    //같으면 둘다 1점

    //총점 같으면 마지막 라운드 이긴사람이 승자
    //승부 안나는 경우는 모든라운드 비기는 경우

    int a[10] = { 0, };
    int b[10] = { 0, };
    int ascore = 0;
    int bscore = 0;
    char lastWin = 'D';

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }
   
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i]) { ascore += 3;  lastWin = 'A';}
        else if (b[i] > a[i]) { bscore += 3; lastWin = 'B'; }
        else if (a[i] == b[i]) {
            ascore++; bscore++;
        }
        else;

    }


    cout << ascore << " " << bscore << endl;

    if (ascore > bscore)
    {
       
        cout << "A";
        return 0;
    }

    else if (bscore > ascore)
    {
       
        cout << "B";
        return 0;
    }
    else
        cout << lastWin;
      
    }
    
